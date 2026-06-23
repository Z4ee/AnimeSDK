#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EA8435E138F2E03.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class Class_2_208CC9941471731A_400;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_EF4F614DB2686356_METHOD_2_1D54615E03D2FCC5_OFFSET UNITYSDK_OFFSET(0x11CE3400)
#define CLASS_2_EF4F614DB2686356_METHOD_2_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x11CE3190)
#define CLASS_2_EF4F614DB2686356_METHOD_2_6E1B7843622BB8BD_OFFSET UNITYSDK_OFFSET(0x11CE30C0)
#define CLASS_2_EF4F614DB2686356_METHOD_2_C3EA49AC0F88C1DB_OFFSET UNITYSDK_OFFSET(0x11CE3260)
#define CLASS_2_EF4F614DB2686356_METHOD_2_FAC02F8494EF897F_OFFSET UNITYSDK_OFFSET(0x11CE33F0)
#define CLASS_2_EF4F614DB2686356__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE3020)

inline static constexpr unsigned int Class_2_EF4F614DB2686356_TypeDefinitionIndex = 68056;

class Class_2_EF4F614DB2686356 : public ::Class_1_1EA8435E138F2E03
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6E1B7843622BB8BD(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_6E1B7843622BB8BD_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Void Method_2_C3EA49AC0F88C1DB(::Class_2_208CC9941471731A_400* a1, ::NodeGraph::VariantUnion a2, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_400*, ::NodeGraph::VariantUnion, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_C3EA49AC0F88C1DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FAC02F8494EF897F(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_FAC02F8494EF897F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_1D54615E03D2FCC5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_1D54615E03D2FCC5_OFFSET))(this);
	}
};
