#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A03CD20)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_00A1233CF10BA4BC_OFFSET UNITYSDK_OFFSET(0x1A03CE80)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_1_OFFSET UNITYSDK_OFFSET(0x1A03CE00)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_2_OFFSET UNITYSDK_OFFSET(0x1A03D280)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x1A03CD80)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_C9629590CC6F1591_OFFSET UNITYSDK_OFFSET(0x1A03D300)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03CD70)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargetting_TypeDefinitionIndex = 87115;

	class MaterialModifierTargetting : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::MaterialModifierTargetting*>* OnChanged; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Boolean applyAllMaterials; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* customMaterialIndexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* Method_1_00A1233CF10BA4BC()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_00A1233CF10BA4BC_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_6597F9D2D4A0542F_2_OFFSET))(this);
		}

		::System::Int32 Method_1_C9629590CC6F1591(::MoleMole::MonoRenderHandler* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_METHOD_1_C9629590CC6F1591_OFFSET))(this, a1);
		}
	};
}
