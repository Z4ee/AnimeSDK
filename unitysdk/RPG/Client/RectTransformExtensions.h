#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETBOTTOM_OFFSET UNITYSDK_OFFSET(0xA2946C0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETLEFT_OFFSET UNITYSDK_OFFSET(0xA2943F0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETRIGHT_OFFSET UNITYSDK_OFFSET(0xA2944C0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETTOP_OFFSET UNITYSDK_OFFSET(0xA2945C0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0xA294790)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETBOTTOM_OFFSET UNITYSDK_OFFSET(0xA294160)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETLEFT_OFFSET UNITYSDK_OFFSET(0xA293910)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETRIGHT_OFFSET UNITYSDK_OFFSET(0xA293BA0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETTOP_OFFSET UNITYSDK_OFFSET(0xA293E80)

namespace RPG::Client
{
	inline static constexpr unsigned int RectTransformExtensions_TypeDefinitionIndex = 59648;

	class RectTransformExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetLeft(::UnityEngine::RectTransform* rt, ::System::Single left)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETLEFT_OFFSET))(rt, left);
		}

		static ::System::Void SetRight(::UnityEngine::RectTransform* rt, ::System::Single right)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETRIGHT_OFFSET))(rt, right);
		}

		static ::System::Void SetTop(::UnityEngine::RectTransform* rt, ::System::Single top)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETTOP_OFFSET))(rt, top);
		}

		static ::System::Void SetBottom(::UnityEngine::RectTransform* rt, ::System::Single bottom)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETBOTTOM_OFFSET))(rt, bottom);
		}

		static ::System::Single GetLeft(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETLEFT_OFFSET))(rt);
		}

		static ::System::Single GetRight(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETRIGHT_OFFSET))(rt);
		}

		static ::System::Single GetTop(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETTOP_OFFSET))(rt);
		}

		static ::System::Single GetBottom(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETBOTTOM_OFFSET))(rt);
		}

		static ::System::Boolean IsPoolable(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_ISPOOLABLE_OFFSET))(rt);
		}
	};
}
