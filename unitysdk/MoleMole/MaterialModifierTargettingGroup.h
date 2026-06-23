#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MaterialModifierTargetting; }
namespace MoleMole { class MonoRenderHandler; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BC92B0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_1DA658F42F780D13_OFFSET UNITYSDK_OFFSET(0x12BC9720)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x12BC9510)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12BC96E0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_DD58D7555070DEA2_OFFSET UNITYSDK_OFFSET(0x12BC9770)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC9490)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargettingGroup_TypeDefinitionIndex = 78402;

	class MaterialModifierTargettingGroup : public ::System::Object
	{
	public:
		::System::Boolean applyAllRenderers; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MaterialModifierTargetting*>* targettingList; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _materialList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_1DA658F42F780D13(::MoleMole::MaterialModifierTargetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialModifierTargetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_1DA658F42F780D13_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_DD58D7555070DEA2(::MoleMole::MonoRenderHandler* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_METHOD_1_DD58D7555070DEA2_OFFSET))(this, a1);
		}
	};
}
