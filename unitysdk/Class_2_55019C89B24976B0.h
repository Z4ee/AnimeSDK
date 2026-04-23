#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_4C418720A5B079EE;
namespace RPG::GameCore { class ConvincePlayOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_55019C89B24976B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124F3B70)
#define CLASS_2_55019C89B24976B0_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x124F4560)
#define CLASS_2_55019C89B24976B0_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x124F3BC0)
#define CLASS_2_55019C89B24976B0_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x124F4890)
#define CLASS_2_55019C89B24976B0_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x124F4910)
#define CLASS_2_55019C89B24976B0_METHOD_2_91F952E97A36FBFC_OFFSET UNITYSDK_OFFSET(0x124F4080)
#define CLASS_2_55019C89B24976B0_METHOD_2_99272A34A22F949E_OFFSET UNITYSDK_OFFSET(0x124F4810)
#define CLASS_2_55019C89B24976B0_METHOD_2_AB8F025E804FE07F_OFFSET UNITYSDK_OFFSET(0x124F46E0)
#define CLASS_2_55019C89B24976B0_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x124F4750)
#define CLASS_2_55019C89B24976B0_METHOD_2_F088F946AD14C0AD_OFFSET UNITYSDK_OFFSET(0x124F3D00)
#define CLASS_2_55019C89B24976B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124F3E40)
#define CLASS_2_55019C89B24976B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124F42C0)
#define CLASS_2_55019C89B24976B0_TICK_OFFSET UNITYSDK_OFFSET(0x124F4310)
#define CLASS_2_55019C89B24976B0__CTOR_OFFSET UNITYSDK_OFFSET(0x124F3AE0)

inline static constexpr unsigned int Class_2_55019C89B24976B0_TypeDefinitionIndex = 48642;

class Class_2_55019C89B24976B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x18
	::System::String* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x28
	::RPG::GameCore::ConvincePlayOptionTalk* Field_2_0; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::System::Boolean Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F088F946AD14C0AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_F088F946AD14C0AD_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB8F025E804FE07F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_AB8F025E804FE07F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_99272A34A22F949E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_99272A34A22F949E_OFFSET))(this, a1);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}

	::System::Void Method_2_91F952E97A36FBFC(::Class_1_4C418720A5B079EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C418720A5B079EE*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_91F952E97A36FBFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}
};
