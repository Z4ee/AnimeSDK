#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextOutline.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTSHADOW_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0xCA24E60)
#define RPG_CLIENT_TEXTSHADOW_METHOD_8_D27386107860D10C_OFFSET UNITYSDK_OFFSET(0xCA254B0)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xCA24F70)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xCA24F20)
#define RPG_CLIENT_TEXTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xCA24E70)
#define RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xCA26880)
#define RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xCA26830)

namespace RPG::Client
{
	inline static constexpr unsigned int TextShadow_TypeDefinitionIndex = 67910;

	class TextShadow : public ::RPG::Client::TextOutline
	{
	public:
		// static const ::System::Single Field_8_0; // 0x0
		// static const ::System::Single Field_8_1; // 0x0
		::UnityEngine::Vector2 shadowDistance; // 0xF0
		::Il2CppArray<::UnityEngine::UIVertex>* Field_8_3; // 0xF8
		::Il2CppArray<::System::Int32>* Field_8_4; // 0x100

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

		::System::Void __iFixBaseProxy_ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_1_OFFSET))(this, a1, a2);
		}
	};
}
