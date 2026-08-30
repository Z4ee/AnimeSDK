#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeNode.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeStats.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2DynamicTree; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeQueryCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeRayCastCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeShapeCastCallbackFcn_1; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ALLOCATENODE_OFFSET UNITYSDK_OFFSET(0x1C2DDC30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1C2E2040)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC2E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2ABB00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC4C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C2ABED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_ENLARGEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETAABB_OFFSET UNITYSDK_OFFSET(0x1C2E0680)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETAREARATIO_OFFSET UNITYSDK_OFFSET(0x1C2E03E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C2E0630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETCATEGORYBITS_OFFSET UNITYSDK_OFFSET(0x1C2E0350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C2E0390)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETPROXYCOUNT_OFFSET UNITYSDK_OFFSET(0x1C2E0290)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETROOTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C2E0580)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C2E0640)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_MOVEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC6B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1C2AE7F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_SETCATEGORYBITS_OFFSET UNITYSDK_OFFSET(0x1C2E02B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_VALIDATENOENLARGED_OFFSET UNITYSDK_OFFSET(0x1C2E0620)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1C2AEDD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2FINDBESTSIBLING_OFFSET UNITYSDK_OFFSET(0x1C2DDE50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2FREENODE_OFFSET UNITYSDK_OFFSET(0x1C2DDDF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2INSERTLEAF_OFFSET UNITYSDK_OFFSET(0x1C2DF9E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x1C2DDC10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ISLEAF_OFFSET UNITYSDK_OFFSET(0x1C2DDC00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2MAXUINT16_OFFSET UNITYSDK_OFFSET(0x1C2DDC20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2PARTITIONMID_OFFSET UNITYSDK_OFFSET(0x1C2E06C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2PARTITIONSAH_OFFSET UNITYSDK_OFFSET(0x1C2E0E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2REMOVELEAF_OFFSET UNITYSDK_OFFSET(0x1C2DFF20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ROTATENODES_OFFSET UNITYSDK_OFFSET(0x1C2DE6D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2E3050)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DynamicTrees_TypeDefinitionIndex = 35977;

	class B2DynamicTrees : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode* StaticGet_b2_defaultTreeNode()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode*)Il2CppClass::FromTypeDefinitionIndex(B2DynamicTrees_TypeDefinitionIndex)->GetStaticField(0xB9F0);
		}
		// static const ::System::Int32 B2_TREE_STACK_SIZE = 0x400; // 0x0
		// static const ::System::Int32 B2_BIN_COUNT = 0x8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES__CCTOR_OFFSET))();
		}

		static ::System::Boolean b2IsLeaf(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode& a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ISLEAF_OFFSET))(a1);
		}

		static ::System::Boolean b2IsAllocated(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode& a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ISALLOCATED_OFFSET))(a1);
		}

		static ::System::UInt16 b2MaxUInt16(::System::UInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::UInt16(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2MAXUINT16_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* b2DynamicTree_Create()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_CREATE_OFFSET))();
		}

		static ::System::Void b2DynamicTree_Destroy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_DESTROY_OFFSET))(a1);
		}

		static ::System::Int32 b2AllocateNode(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ALLOCATENODE_OFFSET))(a1);
		}

		static ::System::Void b2FreeNode(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2FREENODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2FindBestSibling(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2FINDBESTSIBLING_OFFSET))(a1, a2);
		}

		static ::System::Void b2RotateNodes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2ROTATENODES_OFFSET))(a1, a2);
		}

		static ::System::Void b2InsertLeaf(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2INSERTLEAF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RemoveLeaf(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2REMOVELEAF_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2DynamicTree_CreateProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_CREATEPROXY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2DynamicTree_DestroyProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_DESTROYPROXY_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2DynamicTree_GetProxyCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETPROXYCOUNT_OFFSET))(a1);
		}

		static ::System::Void b2DynamicTree_MoveProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_MOVEPROXY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DynamicTree_EnlargeProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_ENLARGEPROXY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DynamicTree_SetCategoryBits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_SETCATEGORYBITS_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 b2DynamicTree_GetCategoryBits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETCATEGORYBITS_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2DynamicTree_GetHeight(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETHEIGHT_OFFSET))(a1);
		}

		static ::System::Single b2DynamicTree_GetAreaRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETAREARATIO_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2DynamicTree_GetRootBounds(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETROOTBOUNDS_OFFSET))(a1);
		}

		static ::System::Void b2DynamicTree_Validate(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_VALIDATE_OFFSET))(a1);
		}

		static ::System::Void b2DynamicTree_ValidateNoEnlarged(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_VALIDATENOENLARGED_OFFSET))(a1);
		}

		static ::System::Int32 b2DynamicTree_GetByteCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETBYTECOUNT_OFFSET))(a1);
		}

		static ::System::UInt64 b2DynamicTree_GetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETUSERDATA_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2DynamicTree_GetAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_GETAABB_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2PartitionMid(::System::Span_1<::System::Int32> a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Span_1<::System::Int32>, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2PARTITIONMID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 b2PartitionSAH(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2PARTITIONSAH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 b2BuildTree(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2BUILDTREE_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2DynamicTree_Rebuild(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREES_B2DYNAMICTREE_REBUILD_OFFSET))(a1, a2);
		}
	};
}
