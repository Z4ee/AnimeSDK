#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ModelPartRoot; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE_METHOD_1_6226DB4EDF1E12EF_OFFSET UNITYSDK_OFFSET(0x1175CC50)
#define MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x1175D340)
#define MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1175CC40)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartRoot_Class_1_CBF986524EA4BFDE_TypeDefinitionIndex = 45739;

	class ModelPartRoot_Class_1_CBF986524EA4BFDE : public ::System::Object
	{
	public:
		::MoleMole::ModelPartRoot* Field_1_0; // 0x10
		::System::Action* Field_1_3; // 0x18
		::System::Int32 Field_1_1; // 0x20
		::System::Boolean Field_1_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6226DB4EDF1E12EF(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE_METHOD_1_6226DB4EDF1E12EF_OFFSET))(this, a1);
		}

		::System::Void Method_1_AAD21DE195D05736()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_CBF986524EA4BFDE_METHOD_1_AAD21DE195D05736_OFFSET))(this);
		}
	};
}
