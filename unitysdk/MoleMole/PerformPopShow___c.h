#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12573614267589AB.h"
#include "unitysdk/System/Object.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D5BD60)
#define MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5BDA0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_11_OFFSET UNITYSDK_OFFSET(0x11D5C050)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_12_OFFSET UNITYSDK_OFFSET(0x11D5C110)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_13_OFFSET UNITYSDK_OFFSET(0x11D5C220)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_1_OFFSET UNITYSDK_OFFSET(0x11D5C2E0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_3_OFFSET UNITYSDK_OFFSET(0x11D5C2F0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_8_OFFSET UNITYSDK_OFFSET(0x11D5BDB0)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_9_OFFSET UNITYSDK_OFFSET(0x11D5BE70)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c_TypeDefinitionIndex = 43760;

	class PerformPopShow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_12()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36800);
		}
		static ::System::Action** StaticGet___9__21_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36808);
		}
		static ::System::Action** StaticGet___9__21_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36810);
		}
		static ::MoleMole::PerformPopShow___c** StaticGet___9()
		{
			return (::MoleMole::PerformPopShow___c**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36818);
		}
		static ::System::Action** StaticGet___9__21_8()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36820);
		}
		static ::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB>** StaticGet___9__21_1()
		{
			return (::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB>**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36828);
		}
		static ::System::Action** StaticGet___9__21_13()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36830);
		}
		static ::System::Action_1<::Class_2_67F3C5E647F33C2D*>** StaticGet___9__21_9()
		{
			return (::System::Action_1<::Class_2_67F3C5E647F33C2D*>**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x36838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__21_8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_8_OFFSET))(this);
		}

		::System::Void _Play_b__21_9(::Class_2_67F3C5E647F33C2D* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_9_OFFSET))(this, teleportByTransition);
		}

		::System::Void _Play_b__21_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_11_OFFSET))(this);
		}

		::System::Void _Play_b__21_12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_12_OFFSET))(this);
		}

		::System::Void _Play_b__21_13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_13_OFFSET))(this);
		}

		::System::Void _Play_b__21_1(::System::Int32 index, ::System::Int32 playid, ::Enum_3_12573614267589AB showtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_1_OFFSET))(this, index, playid, showtype);
		}

		::System::Void _Play_b__21_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__21_3_OFFSET))(this);
		}
	};
}
