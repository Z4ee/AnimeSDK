#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F6641B177752AEFC.h"
#include "unitysdk/Struct_2_E95FEAD4DB04D741.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_645;
namespace RPG::Client { class LiftAnchorData; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A91FE7F8EE523160_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179E6440)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_15F05A0BB4C0C35E_OFFSET UNITYSDK_OFFSET(0x179E7160)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x179E6AF0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x179E8320)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179E7EF0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x179E77A0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x179E8310)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_5F9B14860EA6F2FD_1_OFFSET UNITYSDK_OFFSET(0x179E6580)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_5F9B14860EA6F2FD_OFFSET UNITYSDK_OFFSET(0x179E6500)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_89A8E479036925D6_OFFSET UNITYSDK_OFFSET(0x179E6750)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_8F63218BB0C2ED6A_OFFSET UNITYSDK_OFFSET(0x179E6B90)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x179E8170)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x179E6FD0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_B27806B1CCE71FC1_OFFSET UNITYSDK_OFFSET(0x179E78D0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x179E7D20)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_C3604C0021C16227_OFFSET UNITYSDK_OFFSET(0x179E79C0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_C9EAB9831FB103C0_OFFSET UNITYSDK_OFFSET(0x179E6600)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x179E6AD0)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x179E8300)
#define CLASS_2_A91FE7F8EE523160_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x179E7F60)
#define CLASS_2_A91FE7F8EE523160__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8380)

inline static constexpr unsigned int Class_2_A91FE7F8EE523160_TypeDefinitionIndex = 57596;

class Class_2_A91FE7F8EE523160 : public ::Class_1_F6641B177752AEFC
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::RPG::Client::LiftAnchorData* Field_2_2; // 0x28
	::Struct_2_E95FEAD4DB04D741 Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x80
	::System::Boolean Field_2_5; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F9B14860EA6F2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_5F9B14860EA6F2FD_OFFSET))(this);
	}

	::System::Void Method_2_5F9B14860EA6F2FD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_5F9B14860EA6F2FD_1_OFFSET))(this);
	}

	::System::Void Method_2_C9EAB9831FB103C0(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_C9EAB9831FB103C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89A8E479036925D6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_89A8E479036925D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F63218BB0C2ED6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_8F63218BB0C2ED6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_15F05A0BB4C0C35E(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_15F05A0BB4C0C35E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C3604C0021C16227(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_C3604C0021C16227_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_645* Method_2_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_4F4018519B20BBDD_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_B27806B1CCE71FC1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_B27806B1CCE71FC1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A91FE7F8EE523160_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
