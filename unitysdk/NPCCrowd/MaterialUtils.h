#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define NPCCROWD_MATERIALUTILS_CHECKISSAMEMATERIALS_1_OFFSET UNITYSDK_OFFSET(0xF615250)
#define NPCCROWD_MATERIALUTILS_CHECKISSAMEMATERIALS_OFFSET UNITYSDK_OFFSET(0xF614E10)

namespace NPCCrowd
{
	inline static constexpr unsigned int MaterialUtils_TypeDefinitionIndex = 72989;

	class MaterialUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CheckIsSameMaterials(::Il2CppArray<::UnityEngine::Material*>* matsA, ::Il2CppArray<::UnityEngine::Material*>* matsB)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_MATERIALUTILS_CHECKISSAMEMATERIALS_OFFSET))(matsA, matsB);
		}

		static ::System::Boolean CheckIsSameMaterials_1(::System::Collections::Generic::List_1<::UnityEngine::Material*>* matsA, ::Il2CppArray<::UnityEngine::Material*>* matsB)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_MATERIALUTILS_CHECKISSAMEMATERIALS_1_OFFSET))(matsA, matsB);
		}
	};
}
