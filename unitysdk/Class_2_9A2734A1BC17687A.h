#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8.h"
#include "unitysdk/Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/Share/EItemType.h"

class Class_3_126510A8BEABCBD0_11;
class Class_3_3C27FB03C7F640D0_8;
class Class_3_9F091E965E210217_13;
class Class_3_E27FF972D6A12E8E_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9A2734A1BC17687A_METHOD_2_065AD2A1238E20BC_OFFSET UNITYSDK_OFFSET(0x128C10C0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_2F3BE1E22FC9A373_OFFSET UNITYSDK_OFFSET(0x128BFF90)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x128BFB00)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x128BFA50)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_710D0F93472E6738_OFFSET UNITYSDK_OFFSET(0x128C09D0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_7A310FDCDE635116_OFFSET UNITYSDK_OFFSET(0x128BF6A0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_7C563D1F065704B5_OFFSET UNITYSDK_OFFSET(0x128C07A0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_1_OFFSET UNITYSDK_OFFSET(0x128C0F60)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_OFFSET UNITYSDK_OFFSET(0x128BF7B0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_CB1BC448F2EC592A_OFFSET UNITYSDK_OFFSET(0x128BF910)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_D5E3990EBC3676C7_OFFSET UNITYSDK_OFFSET(0x128BF520)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_1_OFFSET UNITYSDK_OFFSET(0x128BFDD0)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_OFFSET UNITYSDK_OFFSET(0x128BFC10)
#define CLASS_2_9A2734A1BC17687A_METHOD_2_F24EB7BCAF9F9715_OFFSET UNITYSDK_OFFSET(0x128C0EF0)
#define CLASS_2_9A2734A1BC17687A__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BF3C0)
#define CLASS_2_9A2734A1BC17687A__CTOR_OFFSET UNITYSDK_OFFSET(0x128BF3B0)

inline static constexpr unsigned int Class_2_9A2734A1BC17687A_TypeDefinitionIndex = 39106;

class Class_2_9A2734A1BC17687A : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Collections::Generic::HashSet_1<::Enum_3_0F1B992870941C13_1>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Enum_3_0F1B992870941C13_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A2734A1BC17687A_TypeDefinitionIndex)->GetStaticField(0x2D8D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_126510A8BEABCBD0_11*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_D5E3990EBC3676C7(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_D5E3990EBC3676C7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B0478C1B06FF4D52(::Class_3_E27FF972D6A12E8E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_1*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_OFFSET))(this, a1);
	}

	::Share::EItemType Method_2_CB1BC448F2EC592A(::System::Int32 a1)
	{
		return ((::Share::EItemType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_CB1BC448F2EC592A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_2_7A310FDCDE635116(::System::UInt32 a1, ::Class_3_126510A8BEABCBD0_11*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_126510A8BEABCBD0_11*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_7A310FDCDE635116_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E4DF4AA609FE481F(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_E27FF972D6A12E8E_1*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_E27FF972D6A12E8E_1*>*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E4DF4AA609FE481F_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>*&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_E4DF4AA609FE481F_1_OFFSET))(this, a1, a2);
	}

	::Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8 Method_2_2F3BE1E22FC9A373(::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1 a1, ::Class_3_9F091E965E210217_13* a2, ::Class_3_E27FF972D6A12E8E_1* a3)
	{
		return ((::Class_2_9A2734A1BC17687A_Enum_3_CA53B6855D49EEB8(*)(::PVOID, ::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1, ::Class_3_9F091E965E210217_13*, ::Class_3_E27FF972D6A12E8E_1*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_2F3BE1E22FC9A373_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_710D0F93472E6738(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_710D0F93472E6738_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F24EB7BCAF9F9715(::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1 a1, ::Class_3_9F091E965E210217_13* a2, ::Class_3_E27FF972D6A12E8E_1* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9A2734A1BC17687A_Enum_3_CD7BFCE73C8A37C6_1, ::Class_3_9F091E965E210217_13*, ::Class_3_E27FF972D6A12E8E_1*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_F24EB7BCAF9F9715_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_7C563D1F065704B5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_7C563D1F065704B5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B0478C1B06FF4D52_1(::Class_3_9F091E965E210217_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9F091E965E210217_13*))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_B0478C1B06FF4D52_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_065AD2A1238E20BC(::System::UInt32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9A2734A1BC17687A_METHOD_2_065AD2A1238E20BC_OFFSET))(this, a1, a2, a3);
	}
};
