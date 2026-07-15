#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

class Class_1_938A995CF5DC9C73;
namespace RPG::Client { class BAPartVariantArray; }
namespace RPG::Client { class BAPartVariantRef; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }
namespace UnityEngine::Rendering { class BatchAnimationMeshVariant; }

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18696A80)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_0D9F178E48A8B2FD_OFFSET UNITYSDK_OFFSET(0x186971D0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x186970D0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_69CB80662EDEA33A_OFFSET UNITYSDK_OFFSET(0x18697450)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_8E5C972B6A5AA5D5_OFFSET UNITYSDK_OFFSET(0x186964C0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18696820)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_RELEASEVARIANTRES_OFFSET UNITYSDK_OFFSET(0x18696430)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_REQUESTVARIANTRES_OFFSET UNITYSDK_OFFSET(0x186962D0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET UNITYSDK_OFFSET(0x18677D80)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x186977E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_TypeDefinitionIndex = 66396;

	class BatchAnimationVariantAsset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAPartVariantArray*>* partsVariantRefs; // 0x18
		::UnityEngine::Rendering::BatchAnimationMeshVariant* Field_5_1; // 0x20
		::RPG::Client::OnAssetOperationDelegate* Field_5_2; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET__CTOR_OFFSET))(this);
		}

		::RPG::Client::BAPartVariantRes* RequestVariantRes(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_REQUESTVARIANTRES_OFFSET))(this, a1);
		}

		::System::Void ReleaseVariantRes(::RPG::Client::BAPartVariantRes* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_RELEASEVARIANTRES_OFFSET))(this, a1);
		}

		::System::Void SetPartVariant(::UnityEngine::Rendering::BatchAnimation* a1, ::Class_1_938A995CF5DC9C73* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::Class_1_938A995CF5DC9C73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET))(this);
		}

		::RPG::Client::BAPartVariantRef* Method_5_8E5C972B6A5AA5D5(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::UnityEngine::Rendering::BAVariantKey& a3, ::System::Int32& a4, ::System::Boolean& a5)
		{
			return ((::RPG::Client::BAPartVariantRef*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::UnityEngine::Rendering::BAVariantKey&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_8E5C972B6A5AA5D5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_5_0DF420E95D6252BE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
		}

		::System::Void Method_5_0D9F178E48A8B2FD(::RPG::Client::BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_1* a1, ::UnityEngine::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_1*, ::UnityEngine::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_0D9F178E48A8B2FD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_69CB80662EDEA33A(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_69CB80662EDEA33A_OFFSET))(this, a1);
		}
	};
}
