#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextOutline.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTSHADOW_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0xE1D73C0)
#define RPG_CLIENT_TEXTSHADOW_METHOD_8_D27386107860D10C_OFFSET UNITYSDK_OFFSET(0xE1D77E0)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xE1D7510)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xE1D74C0)
#define RPG_CLIENT_TEXTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE1D7400)

namespace RPG::Client
{
	inline static constexpr unsigned int TextShadow_TypeDefinitionIndex = 72612;

	class TextShadow : public ::RPG::Client::TextOutline
	{
	public:
		// static const ::System::Single KJDGJFIPIMG; // 0x0
		// static const ::System::Single FCADKBHFHHF; // 0x0
		::UnityEngine::Vector2 shadowDistance; // 0xF0
		::Il2CppArray<::UnityEngine::UIVertex>* NCHPCGNOAEC; // 0xF8
		::Il2CppArray<::System::Int32>* OFOPDBJNBLJ; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AddBaseMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW_GET_ADDBASEMESH_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW_MODIFYMESH_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_8_D27386107860D10C(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW_METHOD_8_D27386107860D10C_OFFSET))(this, a1, a2);
		}
	};
}
