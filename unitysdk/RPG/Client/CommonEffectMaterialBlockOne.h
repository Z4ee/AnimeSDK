#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/RPG/Client/MaterialBlockEffectPropertyType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_03CAA9FC4591314A_OFFSET UNITYSDK_OFFSET(0x1800F270)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_4F515A5348AB9F15_OFFSET UNITYSDK_OFFSET(0x1800F0B0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_925BAA812281E334_OFFSET UNITYSDK_OFFSET(0x1800F460)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1800EF20)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_FD899611565019E0_OFFSET UNITYSDK_OFFSET(0x1800EF80)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1800EEC0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1800EDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonEffectMaterialBlockOne_TypeDefinitionIndex = 67238;

	class CommonEffectMaterialBlockOne : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::System::Int32 PropertyID; // 0x18
		::RPG::Client::MaterialBlockEffectPropertyType PropertyType; // 0x1C
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x20
		::System::Single FloatData; // 0x24
		::UnityEngine::Color ColorData; // 0x28
		::UnityEngine::Vector4 VectorData; // 0x38
		::UnityEngine::Texture2D* TextureData; // 0x48
		::System::Nullable_1<::System::Boolean> KeywordData; // 0x50
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x58

		::System::Void _ctor(::RPG::Client::MaterialBlockEffectPropertyType a1, ::RPG::Client::CommonEffectMatBlockType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::RPG::Client::CommonEffectMatBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::CommonEffectMatBlockType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMatBlockType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Object* Method_1_FD899611565019E0(::UnityEngine::Material* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_FD899611565019E0_OFFSET))(this, a1);
		}

		::System::Void Method_1_4F515A5348AB9F15(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_4F515A5348AB9F15_OFFSET))(this, a1);
		}

		::System::Void Method_1_03CAA9FC4591314A(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_03CAA9FC4591314A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_925BAA812281E334(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCKONE_METHOD_1_925BAA812281E334_OFFSET))(this, a1, a2);
		}
	};
}
