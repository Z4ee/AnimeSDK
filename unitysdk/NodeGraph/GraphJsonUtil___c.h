#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class NodeGraphNormal; }

#define NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11374E60)
#define NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11374EA0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x11374EB0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET UNITYSDK_OFFSET(0x113751D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET UNITYSDK_OFFSET(0x11375220)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET UNITYSDK_OFFSET(0x113752E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET UNITYSDK_OFFSET(0x11375330)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET UNITYSDK_OFFSET(0x11375380)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET UNITYSDK_OFFSET(0x113753D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET UNITYSDK_OFFSET(0x11375420)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET UNITYSDK_OFFSET(0x11375470)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET UNITYSDK_OFFSET(0x113754C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET UNITYSDK_OFFSET(0x11375520)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x11374F00)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET UNITYSDK_OFFSET(0x11375570)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET UNITYSDK_OFFSET(0x113755F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET UNITYSDK_OFFSET(0x11375640)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET UNITYSDK_OFFSET(0x11375690)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET UNITYSDK_OFFSET(0x113756E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET UNITYSDK_OFFSET(0x11375740)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET UNITYSDK_OFFSET(0x11375790)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET UNITYSDK_OFFSET(0x113757E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET UNITYSDK_OFFSET(0x11375830)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET UNITYSDK_OFFSET(0x11375880)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET UNITYSDK_OFFSET(0x11374F50)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET UNITYSDK_OFFSET(0x113758E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET UNITYSDK_OFFSET(0x11375930)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET UNITYSDK_OFFSET(0x11375980)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET UNITYSDK_OFFSET(0x113759D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET UNITYSDK_OFFSET(0x11375A20)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET UNITYSDK_OFFSET(0x11375D10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET UNITYSDK_OFFSET(0x11375D60)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET UNITYSDK_OFFSET(0x11375DB0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET UNITYSDK_OFFSET(0x11375E00)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET UNITYSDK_OFFSET(0x11375E50)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET UNITYSDK_OFFSET(0x11374FA0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET UNITYSDK_OFFSET(0x11375EA0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET UNITYSDK_OFFSET(0x11375EF0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET UNITYSDK_OFFSET(0x11375F40)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET UNITYSDK_OFFSET(0x11375F90)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET UNITYSDK_OFFSET(0x11375FE0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET UNITYSDK_OFFSET(0x11376030)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET UNITYSDK_OFFSET(0x11376080)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET UNITYSDK_OFFSET(0x113760D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET UNITYSDK_OFFSET(0x11376120)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET UNITYSDK_OFFSET(0x11376170)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x11374FF0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET UNITYSDK_OFFSET(0x113761C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET UNITYSDK_OFFSET(0x11376210)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET UNITYSDK_OFFSET(0x11376260)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET UNITYSDK_OFFSET(0x113762B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET UNITYSDK_OFFSET(0x11376450)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET UNITYSDK_OFFSET(0x113764A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET UNITYSDK_OFFSET(0x113764F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET UNITYSDK_OFFSET(0x11376550)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET UNITYSDK_OFFSET(0x11375040)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET UNITYSDK_OFFSET(0x11375090)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET UNITYSDK_OFFSET(0x113750E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET UNITYSDK_OFFSET(0x11375130)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET UNITYSDK_OFFSET(0x11375180)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil___c_TypeDefinitionIndex = 41825;

	class GraphJsonUtil___c : public ::System::Object
	{
	public:
		static ::NodeGraph::GraphJsonUtil___c** StaticGet___9()
		{
			return (::NodeGraph::GraphJsonUtil___c**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil___c_TypeDefinitionIndex)->GetStaticField(0x4A320);
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
