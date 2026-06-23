#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12573614267589AB.h"
#include "unitysdk/System/Object.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11648290)
#define MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116482D0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_10_OFFSET UNITYSDK_OFFSET(0x11648580)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_11_OFFSET UNITYSDK_OFFSET(0x11648640)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_12_OFFSET UNITYSDK_OFFSET(0x11648750)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_1_OFFSET UNITYSDK_OFFSET(0x11648810)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_3_OFFSET UNITYSDK_OFFSET(0x11648820)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_7_OFFSET UNITYSDK_OFFSET(0x116482E0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_8_OFFSET UNITYSDK_OFFSET(0x116483A0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c_TypeDefinitionIndex = 86890;

	class PerformPopShow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411A0);
		}
		static ::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB>** StaticGet___9__18_1()
		{
			return (::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB>**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411A8);
		}
		static ::System::Action** StaticGet___9__18_12()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411B0);
		}
		static ::MoleMole::PerformPopShow___c** StaticGet___9()
		{
			return (::MoleMole::PerformPopShow___c**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411B8);
		}
		static ::System::Action** StaticGet___9__18_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411C0);
		}
		static ::System::Action_1<::Class_2_67F3C5E647F33C2D*>** StaticGet___9__18_8()
		{
			return (::System::Action_1<::Class_2_67F3C5E647F33C2D*>**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411C8);
		}
		static ::System::Action** StaticGet___9__18_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411D0);
		}
		static ::System::Action** StaticGet___9__18_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x411D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__18_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_7_OFFSET))(this);
		}

		::System::Void _Play_b__18_8(::Class_2_67F3C5E647F33C2D* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_8_OFFSET))(this, teleportByTransition);
		}

		::System::Void _Play_b__18_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_10_OFFSET))(this);
		}

		::System::Void _Play_b__18_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_11_OFFSET))(this);
		}

		::System::Void _Play_b__18_12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_12_OFFSET))(this);
		}

		::System::Void _Play_b__18_1(::System::Int32 index, ::System::Int32 playid, ::Enum_3_12573614267589AB showtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_1_OFFSET))(this, index, playid, showtype);
		}

		::System::Void _Play_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__18_3_OFFSET))(this);
		}
	};
}
