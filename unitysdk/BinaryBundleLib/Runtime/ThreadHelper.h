#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class SynchronizationContext; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET UNITYSDK_OFFSET(0x1E39C060)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_041FC8D84E022326_OFFSET UNITYSDK_OFFSET(0x1E39C5A0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E39C410)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1E39C420)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E39C220)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x1E39C430)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E39C5B0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0x1E39C230)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1E39C0A0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1E39C340)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET UNITYSDK_OFFSET(0x1E39BFF0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 34509;

	class ThreadHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Field_1_7()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x28E50);
		}
		static ::System::String** StaticGet_Field_1_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x28E58);
		}
		static ::System::Threading::SynchronizationContext** StaticGet_Field_1_1()
		{
			return (::System::Threading::SynchronizationContext**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x28E60);
		}
		static ::System::String** StaticGet_Field_1_6()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x28E68);
		}
		static ::System::Int32* StaticGet_Field_1_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x8270);
		}

		static ::System::Void ResetStatics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET))();
		}

		static ::System::Void InitPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET))();
		}

		static ::System::String* Method_1_126AB3935214AA22()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_OFFSET))();
		}

		static ::System::Void Method_1_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E7EF6BC52B28648C_OFFSET))();
		}

		static ::System::Void Method_1_E67B8EE7D04609D0(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_E67B8EE7D04609D0_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_F39234F2606D8D97()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_F39234F2606D8D97_OFFSET))();
		}

		static ::System::String* Method_1_126AB3935214AA22_1()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_1_OFFSET))();
		}

		static ::System::String* Method_1_126AB3935214AA22_2()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_126AB3935214AA22_2_OFFSET))();
		}

		static ::System::Void Method_1_8E66B82298267DC3(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_8E66B82298267DC3_OFFSET))(a1);
		}

		static ::System::Threading::SynchronizationContext* Method_1_041FC8D84E022326()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_041FC8D84E022326_OFFSET))();
		}

		static ::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_METHOD_1_C74CF020AA42ED85_OFFSET))();
		}
	};
}
