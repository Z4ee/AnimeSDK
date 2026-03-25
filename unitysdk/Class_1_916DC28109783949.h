#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_916DC28109783949_METHOD_1_4FCCE342FD6CBB66_OFFSET UNITYSDK_OFFSET(0x1172E890)
#define CLASS_1_916DC28109783949_METHOD_1_58D6840126AEC720_OFFSET UNITYSDK_OFFSET(0x1172EAB0)
#define CLASS_1_916DC28109783949_METHOD_1_7E3752FF01413C03_OFFSET UNITYSDK_OFFSET(0x1172E5C0)
#define CLASS_1_916DC28109783949_METHOD_1_AF06782972FD2DF6_OFFSET UNITYSDK_OFFSET(0x1172E740)
#define CLASS_1_916DC28109783949_METHOD_1_C3EE7A30AB0D344F_OFFSET UNITYSDK_OFFSET(0x1172E1E0)

inline static constexpr unsigned int Class_1_916DC28109783949_TypeDefinitionIndex = 62306;

class Class_1_916DC28109783949 : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Method_1_C3EE7A30AB0D344F(::Class_0_16E4307DCC419505_29* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Class_0_16E4307DCC419505_29*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_916DC28109783949_METHOD_1_C3EE7A30AB0D344F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF06782972FD2DF6(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_916DC28109783949_METHOD_1_AF06782972FD2DF6_OFFSET))(a1);
	}

	static ::System::String* Method_1_7E3752FF01413C03(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_916DC28109783949_METHOD_1_7E3752FF01413C03_OFFSET))(a1);
	}

	static ::RPG::GameCore::LittleGameEntityConfig* Method_1_4FCCE342FD6CBB66(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_916DC28109783949_METHOD_1_4FCCE342FD6CBB66_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_58D6840126AEC720(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_916DC28109783949_METHOD_1_58D6840126AEC720_OFFSET))(a1);
	}
};
