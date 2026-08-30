#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

class Class_1_96ED128DCD0679FC;
namespace RPG::Client { class BAPartVariantArray; }
namespace RPG::Client { class BAPartVariantRef; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_2; }
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

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8D34D0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_474A2ED146647A8E_OFFSET UNITYSDK_OFFSET(0xC8D3BC0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xC8D3AF0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_75F46A40D9393CA6_OFFSET UNITYSDK_OFFSET(0xC8D2F80)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_BC2AC643A97F0883_OFFSET UNITYSDK_OFFSET(0xC8D3E20)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC8D32A0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_RELEASEVARIANTRES_OFFSET UNITYSDK_OFFSET(0xC8D2EF0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_REQUESTVARIANTRES_OFFSET UNITYSDK_OFFSET(0xC8D2E00)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET UNITYSDK_OFFSET(0xC8B3F20)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D4180)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_TypeDefinitionIndex = 69489;

	class BatchAnimationVariantAsset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAPartVariantArray*>* partsVariantRefs; // 0x18
		::UnityEngine::Rendering::BatchAnimationMeshVariant* AGGKALGLIBJ; // 0x20
		::RPG::Client::OnAssetOperationDelegate* IHFDJGGLLFA; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>* NMJHHKGOPHK; // 0x30

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

		::System::Void SetPartVariant(::UnityEngine::Rendering::BatchAnimation* a1, ::Class_1_96ED128DCD0679FC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::Class_1_96ED128DCD0679FC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET))(this);
		}

		::RPG::Client::BAPartVariantRef* Method_5_75F46A40D9393CA6(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::UnityEngine::Rendering::BAVariantKey& a3, ::System::Int32& a4, ::System::Boolean& a5)
		{
			return ((::RPG::Client::BAPartVariantRef*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::UnityEngine::Rendering::BAVariantKey&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_75F46A40D9393CA6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_5_70589F89E4D22649()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_70589F89E4D22649_OFFSET))(this);
		}

		::System::Void Method_5_474A2ED146647A8E(::RPG::Client::BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_2* a1, ::UnityEngine::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_2*, ::UnityEngine::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_474A2ED146647A8E_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_BC2AC643A97F0883(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_METHOD_5_BC2AC643A97F0883_OFFSET))(this, a1);
		}
	};
}
