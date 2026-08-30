#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
#include "unitysdk/System/Object.h"

class Class_2_4F1D8B58CEECB454;
class Class_3_04673DB2E35FE564;
class Class_3_153521F8C15D539F;
class Class_3_2CC3370C8709BCC1;
class Class_3_2E396E206DB7778F;
class Class_3_38C152545CDCE97B;
class Class_3_5A62B20BB82BEBF5;
class Class_3_CC8F37580A08544F;
class Class_3_DCB7F8B839F0C44B_1;
class Class_3_E8059F7236D01C8C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_910574CC99908A65_GET_ABILITYCASTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF10)
#define CLASS_1_910574CC99908A65_GET_ATTACKSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF20)
#define CLASS_1_910574CC99908A65_GET_ATTRIBUTESERVICE_OFFSET UNITYSDK_OFFSET(0x1996EF80)
#define CLASS_1_910574CC99908A65_GET_DEATHSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF30)
#define CLASS_1_910574CC99908A65_GET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x1996EFA0)
#define CLASS_1_910574CC99908A65_GET_ENTITYFACTORYSERVICE_OFFSET UNITYSDK_OFFSET(0x1996EF90)
#define CLASS_1_910574CC99908A65_GET_ERRORSET_OFFSET UNITYSDK_OFFSET(0x1996EF00)
#define CLASS_1_910574CC99908A65_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1996EEE0)
#define CLASS_1_910574CC99908A65_GET_GAMESTATESYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF40)
#define CLASS_1_910574CC99908A65_GET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x1996EEC0)
#define CLASS_1_910574CC99908A65_GET_LOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1996EEB0)
#define CLASS_1_910574CC99908A65_GET_SUMMONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF50)
#define CLASS_1_910574CC99908A65_GET_TEAMBUFFAPPLYSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF60)
#define CLASS_1_910574CC99908A65_GET_TURNBASEDSYSTEM_OFFSET UNITYSDK_OFFSET(0x1996EF70)
#define CLASS_1_910574CC99908A65_METHOD_1_0E8E4459B26B6D1C_OFFSET UNITYSDK_OFFSET(0x1996F7A0)
#define CLASS_1_910574CC99908A65_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1996F760)
#define CLASS_1_910574CC99908A65_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1996F710)
#define CLASS_1_910574CC99908A65_SET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x1996EFB0)
#define CLASS_1_910574CC99908A65_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x1996EEF0)
#define CLASS_1_910574CC99908A65_SET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x1996EED0)
#define CLASS_1_910574CC99908A65__CTOR_OFFSET UNITYSDK_OFFSET(0x1996EFC0)

inline static constexpr unsigned int Class_1_910574CC99908A65_TypeDefinitionIndex = 76946;

class Class_1_910574CC99908A65 : public ::System::Object
{
public:
	static ::Class_2_4F1D8B58CEECB454** StaticGet__DefaultLogger_k__BackingField()
	{
		return (::Class_2_4F1D8B58CEECB454**)Il2CppClass::FromTypeDefinitionIndex(Class_1_910574CC99908A65_TypeDefinitionIndex)->GetStaticField(0x7370);
	}
	::Class_3_153521F8C15D539F* _SummonSystem_k__BackingField; // 0x10
	::Class_3_04673DB2E35FE564* _EntityFactoryService_k__BackingField; // 0x18
	::Class_3_DCB7F8B839F0C44B_1* _TeamBuffApplySystem_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* _ErrorSet_k__BackingField; // 0x28
	::Class_3_CC8F37580A08544F* _DeathSystem_k__BackingField; // 0x30
	::Class_3_2E396E206DB7778F* _AttributeService_k__BackingField; // 0x38
	::Class_3_38C152545CDCE97B* _GameStateSystem_k__BackingField; // 0x40
	::Class_3_2CC3370C8709BCC1* _TurnBasedSystem_k__BackingField; // 0x48
	::Class_3_5A62B20BB82BEBF5* _AbilityCastSystem_k__BackingField; // 0x50
	::Class_3_E8059F7236D01C8C* _AttackSystem_k__BackingField; // 0x58
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel _LogLevel_k__BackingField; // 0x60
	::System::Boolean _IsShowFrame_k__BackingField; // 0x64
	::System::Int32 _Frame_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel get_LogLevel()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_LOGLEVEL_OFFSET))(this);
	}

	::System::Boolean get_IsShowFrame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ISSHOWFRAME_OFFSET))(this);
	}

	::System::Void set_IsShowFrame(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_SET_ISSHOWFRAME_OFFSET))(this, a1);
	}

	::System::Int32 get_Frame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_FRAME_OFFSET))(this);
	}

	::System::Void set_Frame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_SET_FRAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* get_ErrorSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ERRORSET_OFFSET))(this);
	}

	::Class_3_5A62B20BB82BEBF5* get_AbilityCastSystem()
	{
		return ((::Class_3_5A62B20BB82BEBF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ABILITYCASTSYSTEM_OFFSET))(this);
	}

	::Class_3_E8059F7236D01C8C* get_AttackSystem()
	{
		return ((::Class_3_E8059F7236D01C8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ATTACKSYSTEM_OFFSET))(this);
	}

	::Class_3_CC8F37580A08544F* get_DeathSystem()
	{
		return ((::Class_3_CC8F37580A08544F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_DEATHSYSTEM_OFFSET))(this);
	}

	::Class_3_38C152545CDCE97B* get_GameStateSystem()
	{
		return ((::Class_3_38C152545CDCE97B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_GAMESTATESYSTEM_OFFSET))(this);
	}

	::Class_3_153521F8C15D539F* get_SummonSystem()
	{
		return ((::Class_3_153521F8C15D539F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_SUMMONSYSTEM_OFFSET))(this);
	}

	::Class_3_DCB7F8B839F0C44B_1* get_TeamBuffApplySystem()
	{
		return ((::Class_3_DCB7F8B839F0C44B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_TEAMBUFFAPPLYSYSTEM_OFFSET))(this);
	}

	::Class_3_2CC3370C8709BCC1* get_TurnBasedSystem()
	{
		return ((::Class_3_2CC3370C8709BCC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_TURNBASEDSYSTEM_OFFSET))(this);
	}

	::Class_3_2E396E206DB7778F* get_AttributeService()
	{
		return ((::Class_3_2E396E206DB7778F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ATTRIBUTESERVICE_OFFSET))(this);
	}

	::Class_3_04673DB2E35FE564* get_EntityFactoryService()
	{
		return ((::Class_3_04673DB2E35FE564*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_ENTITYFACTORYSERVICE_OFFSET))(this);
	}

	static ::Class_2_4F1D8B58CEECB454* get_DefaultLogger()
	{
		return ((::Class_2_4F1D8B58CEECB454*(*)())((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_GET_DEFAULTLOGGER_OFFSET))();
	}

	static ::System::Void set_DefaultLogger(::Class_2_4F1D8B58CEECB454* a1)
	{
		return ((::System::Void(*)(::Class_2_4F1D8B58CEECB454*))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_SET_DEFAULTLOGGER_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_0E8E4459B26B6D1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_910574CC99908A65_METHOD_1_0E8E4459B26B6D1C_OFFSET))(this, a1);
	}
};
