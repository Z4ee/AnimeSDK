#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49AB19924B4FCC28;
class Class_1_EC8C41D270800CDD;
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DC3FBBD8450D96E_METHOD_1_0DE1B4007EFFF942_OFFSET UNITYSDK_OFFSET(0x10BBEF10)
#define CLASS_1_0DC3FBBD8450D96E_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x10BBED40)
#define CLASS_1_0DC3FBBD8450D96E_METHOD_1_2955BF4A005A0525_OFFSET UNITYSDK_OFFSET(0x10BBEDF0)
#define CLASS_1_0DC3FBBD8450D96E_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x10BBEC00)
#define CLASS_1_0DC3FBBD8450D96E_METHOD_1_C099C21245C97C3F_OFFSET UNITYSDK_OFFSET(0x10BBEFF0)
#define CLASS_1_0DC3FBBD8450D96E__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBEA40)

inline static constexpr unsigned int Class_1_0DC3FBBD8450D96E_TypeDefinitionIndex = 56581;

class Class_1_0DC3FBBD8450D96E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_EC8C41D270800CDD*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EC8C41D270800CDD*>* Field_1_4; // 0x18
	::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_2955BF4A005A0525(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E_METHOD_1_2955BF4A005A0525_OFFSET))(this, a1, a2);
	}

	::Class_1_EC8C41D270800CDD* Method_1_0DE1B4007EFFF942(::System::Int32 a1)
	{
		return ((::Class_1_EC8C41D270800CDD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E_METHOD_1_0DE1B4007EFFF942_OFFSET))(this, a1);
	}

	::System::Void Method_1_C099C21245C97C3F(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::Class_1_49AB19924B4FCC28*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_49AB19924B4FCC28*&))((::PBYTE)hIl2Cpp + CLASS_1_0DC3FBBD8450D96E_METHOD_1_C099C21245C97C3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
