#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A.h"
#include "unitysdk/Struct_2_71706210729AB681.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class IMonoModelShapeElement; }

#define MOLEMOLE_MONOMODELSHAPE_FETCHMODELSHAPE_OFFSET UNITYSDK_OFFSET(0x13861ED0)
#define MOLEMOLE_MONOMODELSHAPE_GETSHAPECAPACITY_OFFSET UNITYSDK_OFFSET(0x13861E10)
#define MOLEMOLE_MONOMODELSHAPE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x13862090)
#define MOLEMOLE_MONOMODELSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x138620D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelShape_TypeDefinitionIndex = 61549;

	class MonoModelShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::IMonoModelShapeElement*>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetShapeCapacity(::Enum_3_3855198EDB5CF06A a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_3855198EDB5CF06A))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_GETSHAPECAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 FetchModelShape(::System::Span_1<::Struct_2_71706210729AB681> a1, ::Enum_3_3855198EDB5CF06A a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_71706210729AB681>, ::Enum_3_3855198EDB5CF06A))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_FETCHMODELSHAPE_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
