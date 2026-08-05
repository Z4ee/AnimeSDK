#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Launcher_Enum_3_25543F7BC3C1EDB7.h"
#include "unitysdk/Struct_2_01B14DDCD912426D.h"
#include "unitysdk/Struct_2_E5EB8DF54D830C11.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class GameEngine; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }

#define MOLEMOLE_LAUNCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x118DAE00)
#define MOLEMOLE_LAUNCHER_GET_ISSTARTGAMEPRELOADMODE_OFFSET UNITYSDK_OFFSET(0x118DAB70)
#define MOLEMOLE_LAUNCHER_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x118DCB10)
#define MOLEMOLE_LAUNCHER_METHOD_5_1DEC9081B97868E0_OFFSET UNITYSDK_OFFSET(0x118DEF00)
#define MOLEMOLE_LAUNCHER_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x118DFBA0)
#define MOLEMOLE_LAUNCHER_METHOD_5_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x118DD360)
#define MOLEMOLE_LAUNCHER_METHOD_5_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x118DCA10)
#define MOLEMOLE_LAUNCHER_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x118DB6A0)
#define MOLEMOLE_LAUNCHER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x118DC610)
#define MOLEMOLE_LAUNCHER_METHOD_5_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x118DC0E0)
#define MOLEMOLE_LAUNCHER_METHOD_5_5AE5B86437B31074_OFFSET UNITYSDK_OFFSET(0x118DC910)
#define MOLEMOLE_LAUNCHER_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x118DBA50)
#define MOLEMOLE_LAUNCHER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x118DD460)
#define MOLEMOLE_LAUNCHER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118DD3E0)
#define MOLEMOLE_LAUNCHER_METHOD_5_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x118DB810)
#define MOLEMOLE_LAUNCHER_METHOD_5_A239DF324AF4215C_OFFSET UNITYSDK_OFFSET(0x118DFDD0)
#define MOLEMOLE_LAUNCHER_METHOD_5_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x118DD530)
#define MOLEMOLE_LAUNCHER_METHOD_5_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x118DD600)
#define MOLEMOLE_LAUNCHER_METHOD_5_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x118DC2F0)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x118DC2A0)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x118DCA90)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x118DCAD0)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x118DFB60)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x118DFFD0)
#define MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118DC260)
#define MOLEMOLE_LAUNCHER_METHOD_5_F84B9C94CF10263D_OFFSET UNITYSDK_OFFSET(0x118DF340)
#define MOLEMOLE_LAUNCHER_START_OFFSET UNITYSDK_OFFSET(0x118DC080)
#define MOLEMOLE_LAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x118DC670)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher_TypeDefinitionIndex = 42425;

	class Launcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_StatEventCategoryEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Launcher_TypeDefinitionIndex)->GetStaticField(0x13630);
		}
		static ::System::Boolean* StaticGet_StatEcsCoreEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Launcher_TypeDefinitionIndex)->GetStaticField(0x13631);
		}
		::System::Int32 Field_5_1; // 0x18
		::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_5_0; // 0x20
		::System::Single Field_5_7; // 0x28
		::System::Int32 Field_5_6; // 0x2C
		::System::Single Field_5_5; // 0x30
		::System::Int32 Field_5_4; // 0x34
		::System::Text::StringBuilder* Field_5_11; // 0x38
		::System::String* Field_5_10; // 0x40
		::Il2CppArray<::System::Int32>* Field_5_9; // 0x48
		::UnityEngine::GUIStyle* Field_5_8; // 0x50
		::UnityEngine::GUIStyle* Field_5_15; // 0x58
		::UnityEngine::GUIStyle* Field_5_14; // 0x60
		::UnityEngine::GUIStyle* Field_5_13; // 0x68
		::UnityEngine::GUIStyle* Field_5_12; // 0x70
		::UnityEngine::GUIStyle* Field_5_19; // 0x78
		::UnityEngine::GUIStyle* Field_5_18; // 0x80
		::UnityEngine::GUIStyle* Field_5_17; // 0x88
		::UnityEngine::Vector2 Field_5_16; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_5_23; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_5_22; // 0xA0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_5_21; // 0xA8
		::MoleMole::GameEngine* Field_5_20; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsStartGamePreloadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_GET_ISSTARTGAMEPRELOADMODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_START_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_5835DC16FC46989B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_5835DC16FC46989B_OFFSET))(this);
		}

		::System::Void Method_5_5AE5B86437B31074(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_5AE5B86437B31074_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_5_261DF843E298B71B()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_261DF843E298B71B_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_5_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_5_9D8CB5E47C1952BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_9D8CB5E47C1952BD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_5_261DF843E298B71B_1()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_261DF843E298B71B_1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_5_B76CD5CB3E297DF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_B76CD5CB3E297DF3_OFFSET))(this);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_5_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_F84B9C94CF10263D(::System::Single a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Launcher_Enum_3_25543F7BC3C1EDB7 a3, ::Struct_2_E5EB8DF54D830C11 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Launcher_Enum_3_25543F7BC3C1EDB7, ::Struct_2_E5EB8DF54D830C11))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_F84B9C94CF10263D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_A239DF324AF4215C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_A239DF324AF4215C_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_CA373AA1C7054598_5_OFFSET))(this);
		}

		::System::Void Method_5_1DEC9081B97868E0(::MoleMole::Battle::Entity* a1, ::MoleMole::Launcher_Enum_3_25543F7BC3C1EDB7 a2, ::Struct_2_E5EB8DF54D830C11 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Launcher_Enum_3_25543F7BC3C1EDB7, ::Struct_2_E5EB8DF54D830C11))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_METHOD_5_1DEC9081B97868E0_OFFSET))(this, a1, a2, a3);
		}
	};
}
