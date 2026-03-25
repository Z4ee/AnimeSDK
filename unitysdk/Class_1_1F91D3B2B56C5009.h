#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1F91D3B2B56C5009_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7B9950)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD7BA6F0)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_6058DFBEADBF2712_OFFSET UNITYSDK_OFFSET(0xD7B9F00)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_6A9FD21A0C1AE521_OFFSET UNITYSDK_OFFSET(0xD7B95F0)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_7A32E6A8057FB5FE_OFFSET UNITYSDK_OFFSET(0xD7B9800)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_86E15ADACCC88AE9_OFFSET UNITYSDK_OFFSET(0xD7BA020)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_A66E25FAE33B0CF8_OFFSET UNITYSDK_OFFSET(0xD7B9DF0)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_E9E18541F31474E0_OFFSET UNITYSDK_OFFSET(0xD7BA0E0)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0xD7B99F0)
#define CLASS_1_1F91D3B2B56C5009_METHOD_1_FB938C30244D6568_OFFSET UNITYSDK_OFFSET(0xD7B9A80)
#define CLASS_1_1F91D3B2B56C5009__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B9560)

inline static constexpr unsigned int Class_1_1F91D3B2B56C5009_TypeDefinitionIndex = 42231;

class Class_1_1F91D3B2B56C5009 : public ::System::Object
{
public:
	::Class_2_E2910CE9CBBA0DE5* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_E2910CE9CBBA0DE5* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E2910CE9CBBA0DE5*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A9FD21A0C1AE521(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_6A9FD21A0C1AE521_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB938C30244D6568(::RPG::GameCore::AIVariable* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_FB938C30244D6568_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A66E25FAE33B0CF8(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_A66E25FAE33B0CF8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6058DFBEADBF2712(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_6058DFBEADBF2712_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_86E15ADACCC88AE9(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_86E15ADACCC88AE9_OFFSET))(this, a1);
	}

	::System::String* Method_1_E9E18541F31474E0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_E9E18541F31474E0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::AIVariable* Method_1_7A32E6A8057FB5FE(::RPG::GameCore::AIVariable* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + CLASS_1_1F91D3B2B56C5009_METHOD_1_7A32E6A8057FB5FE_OFFSET))(this, a1);
	}
};
