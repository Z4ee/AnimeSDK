#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_CEF60A3B121164E2;
namespace MoleMole { class ClothToRenderersDataDic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET UNITYSDK_OFFSET(0x1685BB60)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET UNITYSDK_OFFSET(0x1685B140)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1685AF80)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1685C070)

namespace MoleMole
{
	inline static constexpr unsigned int MDBClothToRenderersMapping_TypeDefinitionIndex = 42384;

	class MDBClothToRenderersMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MdbComponent* Field_5_1; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_CEF60A3B121164E2*>* MdbClothIndexToRenderersState; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* RendererNameToClothIndices; // 0x28
		::MoleMole::ClothToRenderersDataDic* Data; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* get_MdbComponent()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET))(this);
		}

		::System::Void Cache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F>* CacheVisibilityChangeAndCalculate(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MDBClothToRenderersMapping_Struct_2_5D4D097EFCB9C87F>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
