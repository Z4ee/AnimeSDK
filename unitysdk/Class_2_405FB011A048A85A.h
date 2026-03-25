#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

class Class_0_16E4307DCC419505_318;
class Class_1_6680B389A28C1730;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_405FB011A048A85A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA221F70)
#define CLASS_2_405FB011A048A85A_METHOD_2_22CB59AE73370A31_OFFSET UNITYSDK_OFFSET(0xA2231B0)
#define CLASS_2_405FB011A048A85A_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0xA222BA0)
#define CLASS_2_405FB011A048A85A_METHOD_2_317E27F6FF6B372D_OFFSET UNITYSDK_OFFSET(0xA222DA0)
#define CLASS_2_405FB011A048A85A_METHOD_2_4096D03615429975_OFFSET UNITYSDK_OFFSET(0xA223340)
#define CLASS_2_405FB011A048A85A_METHOD_2_4532289116D98671_OFFSET UNITYSDK_OFFSET(0xA223650)
#define CLASS_2_405FB011A048A85A_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA222920)
#define CLASS_2_405FB011A048A85A_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA224140)
#define CLASS_2_405FB011A048A85A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA2240E0)
#define CLASS_2_405FB011A048A85A_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xA2241A0)
#define CLASS_2_405FB011A048A85A_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xA224210)
#define CLASS_2_405FB011A048A85A_METHOD_2_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0xA2220B0)
#define CLASS_2_405FB011A048A85A_METHOD_2_936D3806939567E8_OFFSET UNITYSDK_OFFSET(0xA222110)
#define CLASS_2_405FB011A048A85A_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0xA222A00)
#define CLASS_2_405FB011A048A85A_METHOD_2_A7038C4DCDB60A24_OFFSET UNITYSDK_OFFSET(0xA223780)
#define CLASS_2_405FB011A048A85A_METHOD_2_B870D81140BD1054_OFFSET UNITYSDK_OFFSET(0xA222FD0)
#define CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA222020)
#define CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA222070)
#define CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xA223610)
#define CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA221FD0)
#define CLASS_2_405FB011A048A85A_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0xA224280)
#define CLASS_2_405FB011A048A85A__CTOR_OFFSET UNITYSDK_OFFSET(0xA223FE0)

inline static constexpr unsigned int Class_2_405FB011A048A85A_TypeDefinitionIndex = 40038;

class Class_2_405FB011A048A85A : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* Field_2_3; // 0x28
	::System::Action* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_6680B389A28C1730*>* Field_2_6; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_7; // 0x40
	::System::Single Field_2_2; // 0x48
	::System::Boolean Field_2_5; // 0x4C
	::System::Boolean Field_2_0; // 0x4D
	::System::Single Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_2_7EDBC63FC2BC53F4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_7EDBC63FC2BC53F4_OFFSET))(a1);
	}

	::System::Void Method_2_936D3806939567E8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_936D3806939567E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Void Method_2_317E27F6FF6B372D(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_317E27F6FF6B372D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B870D81140BD1054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_B870D81140BD1054_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_2_22CB59AE73370A31(::Il2CppArray<::Class_0_16E4307DCC419505_318*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_318*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_22CB59AE73370A31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4096D03615429975(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_4096D03615429975_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_4532289116D98671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_4532289116D98671_OFFSET))(this);
	}

	::System::Void Method_2_A7038C4DCDB60A24(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2, ::System::Action* a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_318*>*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_A7038C4DCDB60A24_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_405FB011A048A85A_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
