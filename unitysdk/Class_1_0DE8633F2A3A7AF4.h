#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
#include "unitysdk/System/Object.h"

class Class_2_D108BD1CFC10E5CA;
class Class_3_0F68A20F9F5DDBFF;
class Class_3_6308BB11B982E5EE;
class Class_3_74E033A84A8D01A9;
class Class_3_76CFD1EB9822836A;
class Class_3_89AD00E04815C359;
class Class_3_8AFABE97DEF4F04F;
class Class_3_BDC277BDD9B61076;
class Class_3_D68DCCEFF8E7F0AA;
class Class_3_DCB7F8B839F0C44B_3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0DE8633F2A3A7AF4_GET_ABILITYCASTSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B031E0)
#define CLASS_1_0DE8633F2A3A7AF4_GET_ATTACKSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B031F0)
#define CLASS_1_0DE8633F2A3A7AF4_GET_ATTRIBUTESERVICE_OFFSET UNITYSDK_OFFSET(0x12B03250)
#define CLASS_1_0DE8633F2A3A7AF4_GET_DEATHSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B03200)
#define CLASS_1_0DE8633F2A3A7AF4_GET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x12B03270)
#define CLASS_1_0DE8633F2A3A7AF4_GET_ENTITYFACTORYSERVICE_OFFSET UNITYSDK_OFFSET(0x12B03260)
#define CLASS_1_0DE8633F2A3A7AF4_GET_ERRORSET_OFFSET UNITYSDK_OFFSET(0x12B031D0)
#define CLASS_1_0DE8633F2A3A7AF4_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x12B031B0)
#define CLASS_1_0DE8633F2A3A7AF4_GET_GAMESTATESYSTEM_OFFSET UNITYSDK_OFFSET(0x12B03210)
#define CLASS_1_0DE8633F2A3A7AF4_GET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x12B03190)
#define CLASS_1_0DE8633F2A3A7AF4_GET_LOGLEVEL_OFFSET UNITYSDK_OFFSET(0x12B03180)
#define CLASS_1_0DE8633F2A3A7AF4_GET_SUMMONSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B03220)
#define CLASS_1_0DE8633F2A3A7AF4_GET_TEAMBUFFAPPLYSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B03230)
#define CLASS_1_0DE8633F2A3A7AF4_GET_TURNBASEDSYSTEM_OFFSET UNITYSDK_OFFSET(0x12B03240)
#define CLASS_1_0DE8633F2A3A7AF4_METHOD_1_0E8E4459B26B6D1C_OFFSET UNITYSDK_OFFSET(0x12B03790)
#define CLASS_1_0DE8633F2A3A7AF4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12B036E0)
#define CLASS_1_0DE8633F2A3A7AF4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B03750)
#define CLASS_1_0DE8633F2A3A7AF4_SET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x12B032B0)
#define CLASS_1_0DE8633F2A3A7AF4_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x12B031C0)
#define CLASS_1_0DE8633F2A3A7AF4_SET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x12B031A0)
#define CLASS_1_0DE8633F2A3A7AF4__CTOR_OFFSET UNITYSDK_OFFSET(0x12B032F0)

inline static constexpr unsigned int Class_1_0DE8633F2A3A7AF4_TypeDefinitionIndex = 70999;

class Class_1_0DE8633F2A3A7AF4 : public ::System::Object
{
public:
	static ::Class_2_D108BD1CFC10E5CA** StaticGet__DefaultLogger_k__BackingField()
	{
		return (::Class_2_D108BD1CFC10E5CA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DE8633F2A3A7AF4_TypeDefinitionIndex)->GetStaticField(0x84D0);
	}
	::Class_3_74E033A84A8D01A9* _AbilityCastSystem_k__BackingField; // 0x10
	::Class_3_8AFABE97DEF4F04F* _EntityFactoryService_k__BackingField; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* _ErrorSet_k__BackingField; // 0x20
	::Class_3_DCB7F8B839F0C44B_3* _TeamBuffApplySystem_k__BackingField; // 0x28
	::Class_3_D68DCCEFF8E7F0AA* _AttributeService_k__BackingField; // 0x30
	::Class_3_0F68A20F9F5DDBFF* _TurnBasedSystem_k__BackingField; // 0x38
	::Class_3_BDC277BDD9B61076* _AttackSystem_k__BackingField; // 0x40
	::Class_3_76CFD1EB9822836A* _GameStateSystem_k__BackingField; // 0x48
	::Class_3_89AD00E04815C359* _DeathSystem_k__BackingField; // 0x50
	::Class_3_6308BB11B982E5EE* _SummonSystem_k__BackingField; // 0x58
	::System::Int32 _Frame_k__BackingField; // 0x60
	::System::Boolean _IsShowFrame_k__BackingField; // 0x64
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel _LogLevel_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel get_LogLevel()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_LOGLEVEL_OFFSET))(this);
	}

	::System::Boolean get_IsShowFrame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ISSHOWFRAME_OFFSET))(this);
	}

	::System::Void set_IsShowFrame(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_SET_ISSHOWFRAME_OFFSET))(this, value);
	}

	::System::Int32 get_Frame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_FRAME_OFFSET))(this);
	}

	::System::Void set_Frame(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_SET_FRAME_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* get_ErrorSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ERRORSET_OFFSET))(this);
	}

	::Class_3_74E033A84A8D01A9* get_AbilityCastSystem()
	{
		return ((::Class_3_74E033A84A8D01A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ABILITYCASTSYSTEM_OFFSET))(this);
	}

	::Class_3_BDC277BDD9B61076* get_AttackSystem()
	{
		return ((::Class_3_BDC277BDD9B61076*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ATTACKSYSTEM_OFFSET))(this);
	}

	::Class_3_89AD00E04815C359* get_DeathSystem()
	{
		return ((::Class_3_89AD00E04815C359*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_DEATHSYSTEM_OFFSET))(this);
	}

	::Class_3_76CFD1EB9822836A* get_GameStateSystem()
	{
		return ((::Class_3_76CFD1EB9822836A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_GAMESTATESYSTEM_OFFSET))(this);
	}

	::Class_3_6308BB11B982E5EE* get_SummonSystem()
	{
		return ((::Class_3_6308BB11B982E5EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_SUMMONSYSTEM_OFFSET))(this);
	}

	::Class_3_DCB7F8B839F0C44B_3* get_TeamBuffApplySystem()
	{
		return ((::Class_3_DCB7F8B839F0C44B_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_TEAMBUFFAPPLYSYSTEM_OFFSET))(this);
	}

	::Class_3_0F68A20F9F5DDBFF* get_TurnBasedSystem()
	{
		return ((::Class_3_0F68A20F9F5DDBFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_TURNBASEDSYSTEM_OFFSET))(this);
	}

	::Class_3_D68DCCEFF8E7F0AA* get_AttributeService()
	{
		return ((::Class_3_D68DCCEFF8E7F0AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ATTRIBUTESERVICE_OFFSET))(this);
	}

	::Class_3_8AFABE97DEF4F04F* get_EntityFactoryService()
	{
		return ((::Class_3_8AFABE97DEF4F04F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_ENTITYFACTORYSERVICE_OFFSET))(this);
	}

	static ::Class_2_D108BD1CFC10E5CA* get_DefaultLogger()
	{
		return ((::Class_2_D108BD1CFC10E5CA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_GET_DEFAULTLOGGER_OFFSET))();
	}

	static ::System::Void set_DefaultLogger(::Class_2_D108BD1CFC10E5CA* value)
	{
		return ((::System::Void(*)(::Class_2_D108BD1CFC10E5CA*))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_SET_DEFAULTLOGGER_OFFSET))(value);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0E8E4459B26B6D1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0DE8633F2A3A7AF4_METHOD_1_0E8E4459B26B6D1C_OFFSET))(this, a1);
	}
};
