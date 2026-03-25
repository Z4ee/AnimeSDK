#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class GCFreeLazy_1; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9414DF0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x9414D40)
#define RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x9415330)
#define RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x9415280)
#define RPG_CLIENT_COMPONENTEXTENSIONS_RECURSIVECOPYLIGHTWEIGHTACTIVETO_OFFSET UNITYSDK_OFFSET(0x9415E20)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFEFIND_OFFSET UNITYSDK_OFFSET(0x94147D0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET UNITYSDK_OFFSET(0x9414B30)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9414930)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETENABLED_OFFSET UNITYSDK_OFFSET(0x9414880)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x9414A30)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SET2DOBJECTWITH3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x94153E0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETCANVASGROUPACTIVE_OFFSET UNITYSDK_OFFSET(0x9414EA0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETCENTERPIVOT_OFFSET UNITYSDK_OFFSET(0x9414F20)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETXCOORDINATEWITH3DPOSITION_OFFSET UNITYSDK_OFFSET(0x9415C10)
#define RPG_CLIENT_COMPONENTEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9416090)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentExtensions_TypeDefinitionIndex = 59638;

	class ComponentExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x41680);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x41688);
		}
		static ::UnityEngine::Vector2* StaticGet__CenterPivot()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x116D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Transform* SafeFind(::UnityEngine::Component* component, ::System::String* path, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFEFIND_OFFSET))(component, path, outputError);
		}

		static ::System::Void SafeSetEnabled(::UnityEngine::Component* component, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETENABLED_OFFSET))(component, enabled);
		}

		static ::System::Void SafeSetActive(::UnityEngine::Component* component, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVE_OFFSET))(component, value, outputError);
		}

		static ::System::Void SafeSetLightWeightActive(::UnityEngine::Component* component, ::System::Boolean active, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET))(component, active, outputError);
		}

		static ::System::Void SafeSetActiveByScale(::UnityEngine::Component* component, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET))(component, value, outputError);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Component* component)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDREN_OFFSET))(component);
		}

		static ::System::Void DestroyChildrenImmediate(::UnityEngine::Component* component)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET))(component);
		}

		static ::System::Void SetCanvasGroupActive(::UnityEngine::CanvasGroup* canvasGroup, ::System::Boolean active)
		{
			return ((::System::Void(*)(::UnityEngine::CanvasGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETCANVASGROUPACTIVE_OFFSET))(canvasGroup, active);
		}

		static ::System::Void SetCenterPivot(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETCENTERPIVOT_OFFSET))(transform);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* LuaGetWorldCorners(::UnityEngine::RectTransform* rt, ::System::Boolean getNewInstance)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETWORLDCORNERS_OFFSET))(rt, getNewInstance);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* LuaGetLocalCorners(::UnityEngine::RectTransform* rt, ::System::Boolean getNewInstance)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETLOCALCORNERS_OFFSET))(rt, getNewInstance);
		}

		static ::System::Void Set2DObjectWith3DTransform(::UnityEngine::RectTransform* rt, ::UnityEngine::Transform* trans3D, ::System::Boolean useOriginRatio, ::System::Boolean copySize, ::System::Boolean copyPosition)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SET2DOBJECTWITH3DTRANSFORM_OFFSET))(rt, trans3D, useOriginRatio, copySize, copyPosition);
		}

		static ::System::Void SetXCoordinateWith3DPosition(::UnityEngine::RectTransform* rt, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETXCOORDINATEWITH3DPOSITION_OFFSET))(rt, position);
		}

		static ::System::Void RecursiveCopyLightWeightActiveTo(::UnityEngine::Transform* src, ::UnityEngine::Transform* dst, ::System::Boolean forceSync)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_RECURSIVECOPYLIGHTWEIGHTACTIVETO_OFFSET))(src, dst, forceSync);
		}
	};
}
