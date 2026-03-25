#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextOutline.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTSHADOW_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0xA594320)
#define RPG_CLIENT_TEXTSHADOW_METHOD_8_F2EA038FAE2982C3_OFFSET UNITYSDK_OFFSET(0xA594670)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xA594430)
#define RPG_CLIENT_TEXTSHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA5943E0)
#define RPG_CLIENT_TEXTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA594330)
#define RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xA595B20)
#define RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA595AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextShadow_TypeDefinitionIndex = 59572;

	class TextShadow : public ::RPG::Client::TextOutline
	{
	public:
		// static const ::System::Single Field_8_3; // 0x0
		// static const ::System::Single Field_8_4; // 0x0
		::UnityEngine::Vector2 shadowDistance; // 0xB0
		::Il2CppArray<::UnityEngine::UIVertex>* Field_8_1; // 0xB8
		::Il2CppArray<::System::Int32>* Field_8_2; // 0xC0

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

		::System::Void Method_8_F2EA038FAE2982C3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW_METHOD_8_F2EA038FAE2982C3_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ModifyMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* P0, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTSHADOW___IFIXBASEPROXY_MODIFYMESH_1_OFFSET))(this, P0, P1);
		}
	};
}
