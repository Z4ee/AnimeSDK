#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8.h"
#include "unitysdk/Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/Share/EItemType.h"

class Class_3_010347D17DFD5D8F_3;
class Class_3_9F091E965E210217_6;
class Class_3_E082A7C631BFA91D;
class Class_3_E27FF972D6A12E8E_6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9A2734A1BC17687A_METHOD_2_065AD2A1238E20BC_OFFSET UNITYSDK_OFFSET(0x13E76C70)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_2F3BE1E22FC9A373_OFFSET UNITYSDK_OFFSET(0x13E75F70)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13E77390)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x13E75A70)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_7A310FDCDE635116_OFFSET UNITYSDK_OFFSET(0x13E75E80)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_7C563D1F065704B5_OFFSET UNITYSDK_OFFSET(0x13E75B10)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_1_OFFSET UNITYSDK_OFFSET(0x13E75910)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_OFFSET UNITYSDK_OFFSET(0x13E757B0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_CB1BC448F2EC592A_OFFSET UNITYSDK_OFFSET(0x13E75D40)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_D5E3990EBC3676C7_OFFSET UNITYSDK_OFFSET(0x13E76780)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_1_OFFSET UNITYSDK_OFFSET(0x13E76AB0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_OFFSET UNITYSDK_OFFSET(0x13E768F0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_F24EB7BCAF9F9715_OFFSET UNITYSDK_OFFSET(0x13E77320)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_F87F502BB53431DE_OFFSET UNITYSDK_OFFSET(0x13E76E00)
#define CLASS_2_9A2734A1BC17687A__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E75650)
#define CLASS_2_9A2734A1BC17687A__CTOR_OFFSET UNITYSDK_OFFSET(0x13E75640)

inline static constexpr unsigned int Class_2_9A2734A1BC17687A_TypeDefinitionIndex = 66977;

class Class_2_9A2734A1BC17687A : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Collections::Generic::HashSet_1<::Enum_3_0F1B992870941C13>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Enum_3_0F1B992870941C13>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A2734A1BC17687A_TypeDefinitionIndex)->GetStaticField(0x3F140);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E082A7C631BFA91D*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_B0478C1B06FF4D52(::Class_3_9F091E965E210217_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9F091E965E210217_6*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B0478C1B06FF4D52_1(::Class_3_E27FF972D6A12E8E_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_6*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7C563D1F065704B5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_7C563D1F065704B5_OFFSET))(this, a1);
	}

	::Share::EItemType Method_2_CB1BC448F2EC592A(::System::Int32 a1)
	{
		return ((::Share::EItemType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_CB1BC448F2EC592A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7A310FDCDE635116(::System::UInt32 a1, ::Class_3_E082A7C631BFA91D*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_E082A7C631BFA91D*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_7A310FDCDE635116_OFFSET))(this, a1, a2);
	}

	::Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8 Method_2_2F3BE1E22FC9A373(::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1 a1, ::Class_3_9F091E965E210217_6* a2, ::Class_3_E27FF972D6A12E8E_6* a3)
	{
		return ((::Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8(*)(::PVOID, ::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1, ::Class_3_9F091E965E210217_6*, ::Class_3_E27FF972D6A12E8E_6*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_2F3BE1E22FC9A373_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D5E3990EBC3676C7(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_D5E3990EBC3676C7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E4DF4AA609FE481F(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_E27FF972D6A12E8E_6*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_E27FF972D6A12E8E_6*>*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E4DF4AA609FE481F_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_6*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_6*>*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_065AD2A1238E20BC(::System::UInt32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_065AD2A1238E20BC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F87F502BB53431DE(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_F87F502BB53431DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F24EB7BCAF9F9715(::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1 a1, ::Class_3_9F091E965E210217_6* a2, ::Class_3_E27FF972D6A12E8E_6* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1, ::Class_3_9F091E965E210217_6*, ::Class_3_E27FF972D6A12E8E_6*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_F24EB7BCAF9F9715_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}
};
