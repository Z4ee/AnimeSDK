#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class NodeGraphNormal; }

#define NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D9A080)
#define NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9A0C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x11D9A0D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET UNITYSDK_OFFSET(0x11D9A3F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET UNITYSDK_OFFSET(0x11D9A440)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET UNITYSDK_OFFSET(0x11D9A500)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET UNITYSDK_OFFSET(0x11D9A550)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET UNITYSDK_OFFSET(0x11D9A5A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET UNITYSDK_OFFSET(0x11D9A5F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET UNITYSDK_OFFSET(0x11D9A640)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET UNITYSDK_OFFSET(0x11D9A690)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET UNITYSDK_OFFSET(0x11D9A6E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET UNITYSDK_OFFSET(0x11D9A740)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x11D9A120)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET UNITYSDK_OFFSET(0x11D9A790)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET UNITYSDK_OFFSET(0x11D9A810)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET UNITYSDK_OFFSET(0x11D9A860)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET UNITYSDK_OFFSET(0x11D9A8B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET UNITYSDK_OFFSET(0x11D9A900)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET UNITYSDK_OFFSET(0x11D9A960)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET UNITYSDK_OFFSET(0x11D9A9B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET UNITYSDK_OFFSET(0x11D9AA00)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET UNITYSDK_OFFSET(0x11D9AA50)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET UNITYSDK_OFFSET(0x11D9AAA0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET UNITYSDK_OFFSET(0x11D9A170)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET UNITYSDK_OFFSET(0x11D9AB00)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET UNITYSDK_OFFSET(0x11D9AB50)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET UNITYSDK_OFFSET(0x11D9ABA0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET UNITYSDK_OFFSET(0x11D9ABF0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET UNITYSDK_OFFSET(0x11D9AC40)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET UNITYSDK_OFFSET(0x11D9AF30)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET UNITYSDK_OFFSET(0x11D9AF80)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET UNITYSDK_OFFSET(0x11D9AFD0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET UNITYSDK_OFFSET(0x11D9B020)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET UNITYSDK_OFFSET(0x11D9B070)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET UNITYSDK_OFFSET(0x11D9A1C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET UNITYSDK_OFFSET(0x11D9B0C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET UNITYSDK_OFFSET(0x11D9B110)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET UNITYSDK_OFFSET(0x11D9B160)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET UNITYSDK_OFFSET(0x11D9B1B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET UNITYSDK_OFFSET(0x11D9B200)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET UNITYSDK_OFFSET(0x11D9B250)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET UNITYSDK_OFFSET(0x11D9B2A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET UNITYSDK_OFFSET(0x11D9B2F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET UNITYSDK_OFFSET(0x11D9B340)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET UNITYSDK_OFFSET(0x11D9B390)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x11D9A210)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET UNITYSDK_OFFSET(0x11D9B3E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET UNITYSDK_OFFSET(0x11D9B430)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET UNITYSDK_OFFSET(0x11D9B480)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET UNITYSDK_OFFSET(0x11D9B4D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET UNITYSDK_OFFSET(0x11D9B670)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET UNITYSDK_OFFSET(0x11D9B6C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET UNITYSDK_OFFSET(0x11D9B710)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET UNITYSDK_OFFSET(0x11D9B770)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET UNITYSDK_OFFSET(0x11D9A260)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET UNITYSDK_OFFSET(0x11D9A2B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET UNITYSDK_OFFSET(0x11D9A300)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET UNITYSDK_OFFSET(0x11D9A350)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET UNITYSDK_OFFSET(0x11D9A3A0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil___c_TypeDefinitionIndex = 72603;

	class GraphJsonUtil___c : public ::System::Object
	{
	public:
		static ::NodeGraph::GraphJsonUtil___c** StaticGet___9()
		{
			return (::NodeGraph::GraphJsonUtil___c**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil___c_TypeDefinitionIndex)->GetStaticField(0x43BA0);
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
