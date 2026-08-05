#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class NodeGraphNormal; }

#define NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DFE1F0)
#define NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFE230)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x13DFE240)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET UNITYSDK_OFFSET(0x13DFE560)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET UNITYSDK_OFFSET(0x13DFE5B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET UNITYSDK_OFFSET(0x13DFE670)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET UNITYSDK_OFFSET(0x13DFE6C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET UNITYSDK_OFFSET(0x13DFE710)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET UNITYSDK_OFFSET(0x13DFE760)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET UNITYSDK_OFFSET(0x13DFE7B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET UNITYSDK_OFFSET(0x13DFE800)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET UNITYSDK_OFFSET(0x13DFE850)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET UNITYSDK_OFFSET(0x13DFE8B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x13DFE290)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET UNITYSDK_OFFSET(0x13DFE900)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET UNITYSDK_OFFSET(0x13DFE980)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET UNITYSDK_OFFSET(0x13DFE9D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET UNITYSDK_OFFSET(0x13DFEA20)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET UNITYSDK_OFFSET(0x13DFEA70)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET UNITYSDK_OFFSET(0x13DFEAD0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET UNITYSDK_OFFSET(0x13DFEB20)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET UNITYSDK_OFFSET(0x13DFEB70)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET UNITYSDK_OFFSET(0x13DFEBC0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET UNITYSDK_OFFSET(0x13DFEC10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET UNITYSDK_OFFSET(0x13DFE2E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET UNITYSDK_OFFSET(0x13DFEC70)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET UNITYSDK_OFFSET(0x13DFECC0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET UNITYSDK_OFFSET(0x13DFED10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET UNITYSDK_OFFSET(0x13DFED60)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET UNITYSDK_OFFSET(0x13DFEDB0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET UNITYSDK_OFFSET(0x13DFF0A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET UNITYSDK_OFFSET(0x13DFF0F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET UNITYSDK_OFFSET(0x13DFF140)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET UNITYSDK_OFFSET(0x13DFF190)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET UNITYSDK_OFFSET(0x13DFF1E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET UNITYSDK_OFFSET(0x13DFE330)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET UNITYSDK_OFFSET(0x13DFF230)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET UNITYSDK_OFFSET(0x13DFF280)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET UNITYSDK_OFFSET(0x13DFF2D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET UNITYSDK_OFFSET(0x13DFF320)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET UNITYSDK_OFFSET(0x13DFF370)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET UNITYSDK_OFFSET(0x13DFF3C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET UNITYSDK_OFFSET(0x13DFF410)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET UNITYSDK_OFFSET(0x13DFF460)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET UNITYSDK_OFFSET(0x13DFF4B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET UNITYSDK_OFFSET(0x13DFF500)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x13DFE380)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET UNITYSDK_OFFSET(0x13DFF550)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET UNITYSDK_OFFSET(0x13DFF5A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET UNITYSDK_OFFSET(0x13DFF5F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET UNITYSDK_OFFSET(0x13DFF640)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET UNITYSDK_OFFSET(0x13DFF7E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET UNITYSDK_OFFSET(0x13DFF830)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET UNITYSDK_OFFSET(0x13DFF880)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET UNITYSDK_OFFSET(0x13DFF8E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET UNITYSDK_OFFSET(0x13DFE3D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET UNITYSDK_OFFSET(0x13DFE420)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET UNITYSDK_OFFSET(0x13DFE470)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET UNITYSDK_OFFSET(0x13DFE4C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET UNITYSDK_OFFSET(0x13DFE510)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil___c_TypeDefinitionIndex = 52349;

	class GraphJsonUtil___c : public ::System::Object
	{
	public:
		static ::NodeGraph::GraphJsonUtil___c** StaticGet___9()
		{
			return (::NodeGraph::GraphJsonUtil___c**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil___c_TypeDefinitionIndex)->GetStaticField(0x456F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET))(this);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_0(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_1(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_2(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_3(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_4(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_5(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_6(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_7(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_8(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_9(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_10(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_11(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_12(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_13(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_14(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_15(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_16(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_17(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_18(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_19(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_20(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_21(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_22(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_23(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_24(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_25(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_26(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_27(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_28(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_29(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_30(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_31(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_32(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_33(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_34(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_35(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_36(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_37(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_38(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_39(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_40(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_41(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_42(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_43(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_44(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_45(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_46(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_47(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_48(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_49(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_50(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_51(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_52(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_53(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_54(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_55(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET))(this, g);
		}

		::NodeGraph::GraphTask* __cctor_b__4_56(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphTask*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET))(this, g);
		}

		::NodeGraph::GraphTask* __cctor_b__4_57(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphTask*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET))(this, g);
		}
	};
}
