#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_477;
class Class_2_D834A6D890CA2D26;
namespace Share { class CRandom; }
namespace Share { template <typename T> class CWeightList_1; }

#define CLASS_1_1938A04FE0F2281C_METHOD_1_1EC23B25EA0D7433_OFFSET UNITYSDK_OFFSET(0x17339B80)
#define CLASS_1_1938A04FE0F2281C_METHOD_1_3B2FDF16B6A40122_OFFSET UNITYSDK_OFFSET(0x17339BE0)
#define CLASS_1_1938A04FE0F2281C_METHOD_1_5AA28A8030E82AA1_OFFSET UNITYSDK_OFFSET(0x17339B60)
#define CLASS_1_1938A04FE0F2281C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17339B50)
#define CLASS_1_1938A04FE0F2281C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17339B70)
#define CLASS_1_1938A04FE0F2281C__CTOR_OFFSET UNITYSDK_OFFSET(0x17339AF0)

inline static constexpr unsigned int Class_1_1938A04FE0F2281C_TypeDefinitionIndex = 11246;

class Class_1_1938A04FE0F2281C : public ::System::Object
{
public:
	::Share::CWeightList_1<::Class_2_D834A6D890CA2D26*>* Field_1_7; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Share::CWeightList_1<::Class_2_D834A6D890CA2D26*>* Method_1_5AA28A8030E82AA1()
	{
		return ((::Share::CWeightList_1<::Class_2_D834A6D890CA2D26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C_METHOD_1_5AA28A8030E82AA1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_1EC23B25EA0D7433(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>& a1, ::Share::CRandom* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>&, ::Share::CRandom*))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C_METHOD_1_1EC23B25EA0D7433_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3B2FDF16B6A40122(::Class_2_208CC9941471731A_477*& a1, ::System::Int32& a2, ::Share::CRandom* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_477*&, ::System::Int32&, ::Share::CRandom*))((::PBYTE)hIl2Cpp + CLASS_1_1938A04FE0F2281C_METHOD_1_3B2FDF16B6A40122_OFFSET))(this, a1, a2, a3);
	}
};
