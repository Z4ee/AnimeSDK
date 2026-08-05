#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F46AFD57341DA33E.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129ACE90)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_DISABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET UNITYSDK_OFFSET(0x129AD3E0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_1_OFFSET UNITYSDK_OFFSET(0x129AD4C0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET UNITYSDK_OFFSET(0x129AD460)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x129ACCE0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_181CC1E5236E64F0_OFFSET UNITYSDK_OFFSET(0x129AE1F0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x129AD0A0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x129AE160)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_C93D081FACF7055F_OFFSET UNITYSDK_OFFSET(0x129ADF50)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_FDA495FEFCD55A08_OFFSET UNITYSDK_OFFSET(0x129AD6C0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x129AD2B0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x129AD040)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_SETMAP3DZENKOVFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x129ADD50)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x129ADE00)

namespace MoleMole
{
	inline static constexpr unsigned int Map3DZenkovFogManager_TypeDefinitionIndex = 91385;

	class Map3DZenkovFogManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Map3DZenkovFogManager** StaticGet_Field_5_18()
		{
			return (::MoleMole::Map3DZenkovFogManager**)Il2CppClass::FromTypeDefinitionIndex(Map3DZenkovFogManager_TypeDefinitionIndex)->GetStaticField(0x50F00);
		}
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::String* Field_5_6; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_11; // 0x0
		// static const ::System::String* Field_5_10; // 0x0
		// static const ::System::String* Field_5_9; // 0x0
		// static const ::System::String* Field_5_8; // 0x0
		// static const ::System::String* Field_5_15; // 0x0
		// static const ::System::String* Field_5_14; // 0x0
		// static const ::System::Int32 Field_5_13 = 0x40; // 0x0
		// static const ::System::Int32 Field_5_12 = 0x80; // 0x0
		// static const ::System::Int32 Field_5_19 = 0xC; // 0x0
		::UnityEngine::Color _map3DZenkovFogColor; // 0x18
		::UnityEngine::Color _map3DZenkovFogEndColor; // 0x28
		::UnityEngine::Color _map3DZenkovPendingFogColor; // 0x38
		::UnityEngine::Color _map3DZenkovPendingFogEndColor; // 0x48
		::System::Single _map3DZenkovFogGradientDirection; // 0x58
		::System::Single _map3DZenkovPendingFogBreathSpeed; // 0x5C
		::UnityEngine::Color _map3DZenkovFogOutlineColor; // 0x60
		::System::Single _map3DZenkovFogOutlineWidth; // 0x70
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_25; // 0x78
		::Il2CppArray<::System::Single>* Field_5_24; // 0x80
		::Il2CppArray<::System::Single>* Field_5_31; // 0x88
		::Il2CppArray<::System::Single>* Field_5_30; // 0x90
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_29; // 0x98
		::Il2CppArray<::UnityEngine::Vector2>* Field_5_28; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Map3DZenkovFogManager* get_Instance()
		{
			return ((::MoleMole::Map3DZenkovFogManager*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean EnableMap3DZenKovFogAreaEffect(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean EnableMap3DZenKovFogAreaEffect_1(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a1, ::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_1_OFFSET))(this, a1, a2);
		}

		::System::Void DisableMap3DZenKovFogAreaEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_DISABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET))(this);
		}

		::System::Void SetMap3DZenkovFogColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_SETMAP3DZENKOVFOGCOLOR_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_C93D081FACF7055F(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_C93D081FACF7055F_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_5_FDA495FEFCD55A08(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a1, ::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_FDA495FEFCD55A08_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 Method_5_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_C21A7AC6282FB0D0_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}

		static ::System::Single Method_5_181CC1E5236E64F0(::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::Enum_3_F46AFD57341DA33E>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_METHOD_5_181CC1E5236E64F0_OFFSET))(a1, a2);
		}
	};
}
