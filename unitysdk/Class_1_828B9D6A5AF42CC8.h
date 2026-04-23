#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A142DC5409043BE;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_828B9D6A5AF42CC8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C6BEF0)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17C6D3E0)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_6058DFBEADBF2712_OFFSET UNITYSDK_OFFSET(0x17C6C780)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_7A32E6A8057FB5FE_OFFSET UNITYSDK_OFFSET(0x17C6BAD0)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_7C5BC6ACFDEC56DB_OFFSET UNITYSDK_OFFSET(0x17C6BC20)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_86E15ADACCC88AE9_OFFSET UNITYSDK_OFFSET(0x17C6CA30)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_A66E25FAE33B0CF8_OFFSET UNITYSDK_OFFSET(0x17C6C670)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_E9E18541F31474E0_OFFSET UNITYSDK_OFFSET(0x17C6CC50)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x17C6BF90)
#define CLASS_1_828B9D6A5AF42CC8_METHOD_1_FB938C30244D6568_OFFSET UNITYSDK_OFFSET(0x17C6C180)
#define CLASS_1_828B9D6A5AF42CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6B8D0)

inline static constexpr unsigned int Class_1_828B9D6A5AF42CC8_TypeDefinitionIndex = 34476;

class Class_1_828B9D6A5AF42CC8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_1; // 0x10
	::Class_2_0A142DC5409043BE* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_0A142DC5409043BE* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A142DC5409043BE*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C5BC6ACFDEC56DB(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_7C5BC6ACFDEC56DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB938C30244D6568(::RPG::GameCore::AIVariable* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_FB938C30244D6568_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A66E25FAE33B0CF8(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_A66E25FAE33B0CF8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6058DFBEADBF2712(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_6058DFBEADBF2712_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_86E15ADACCC88AE9(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_86E15ADACCC88AE9_OFFSET))(this, a1);
	}

	::System::String* Method_1_E9E18541F31474E0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_E9E18541F31474E0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::AIVariable* Method_1_7A32E6A8057FB5FE(::RPG::GameCore::AIVariable* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + CLASS_1_828B9D6A5AF42CC8_METHOD_1_7A32E6A8057FB5FE_OFFSET))(this, a1);
	}
};
