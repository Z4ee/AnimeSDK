#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class AutoResetEvent; }

#define CLASS_1_298E954BC26AE9BA_METHOD_1_15F001F678C532E4_OFFSET UNITYSDK_OFFSET(0x1179DCF0)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_1AD716A776A6E508_OFFSET UNITYSDK_OFFSET(0x1179DB60)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_37F3816609390384_OFFSET UNITYSDK_OFFSET(0x1179DC80)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_61113270C4B9E4F4_OFFSET UNITYSDK_OFFSET(0x1179DBD0)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_B788E164BE196314_OFFSET UNITYSDK_OFFSET(0x1179DD50)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x1179DE30)
#define CLASS_1_298E954BC26AE9BA_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1179DDF0)

inline static constexpr unsigned int Class_1_298E954BC26AE9BA_TypeDefinitionIndex = 60474;

class Class_1_298E954BC26AE9BA : public ::System::Object
{
public:
	static ::System::Void Method_1_1AD716A776A6E508(::System::String* a1, ::System::Threading::AutoResetEvent* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Threading::AutoResetEvent*))((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_1AD716A776A6E508_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61113270C4B9E4F4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_61113270C4B9E4F4_OFFSET))();
	}

	static ::System::Void Method_1_37F3816609390384(::System::String* a1, ::System::Action_1<::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580>*))((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_37F3816609390384_OFFSET))(a1, a2);
	}

	static ::BehaviorDesigner::Runtime::ExternalBehavior* Method_1_15F001F678C532E4(::System::String* a1)
	{
		return ((::BehaviorDesigner::Runtime::ExternalBehavior*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_15F001F678C532E4_OFFSET))(a1);
	}

	static ::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580 Method_1_B788E164BE196314(::System::String* a1)
	{
		return ((::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_B788E164BE196314_OFFSET))(a1);
	}

	static ::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_C561FF611C07A44C_OFFSET))();
	}

	static ::System::Void Method_1_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_298E954BC26AE9BA_METHOD_1_C561FF611C07A44C_1_OFFSET))();
	}
};
