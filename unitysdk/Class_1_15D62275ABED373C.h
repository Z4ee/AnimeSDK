#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

class Class_1_AE7DD6BAFB8C2EE9;
namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15D62275ABED373C_METHOD_1_1685BD3810865B7C_OFFSET UNITYSDK_OFFSET(0x1098B310)
#define CLASS_1_15D62275ABED373C_METHOD_1_19E47129E79234ED_OFFSET UNITYSDK_OFFSET(0x1098B320)
#define CLASS_1_15D62275ABED373C_METHOD_1_44EDEAE08395A153_OFFSET UNITYSDK_OFFSET(0x1098B170)
#define CLASS_1_15D62275ABED373C_METHOD_1_B40CF9A3C06C2AB8_OFFSET UNITYSDK_OFFSET(0x1098B300)
#define CLASS_1_15D62275ABED373C_METHOD_1_D93D2303F1967C64_1_OFFSET UNITYSDK_OFFSET(0x1098B180)
#define CLASS_1_15D62275ABED373C_METHOD_1_D93D2303F1967C64_OFFSET UNITYSDK_OFFSET(0x1098AFF0)
#define CLASS_1_15D62275ABED373C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1098AE30)
#define CLASS_1_15D62275ABED373C__CTOR_OFFSET UNITYSDK_OFFSET(0x1098AB80)

inline static constexpr unsigned int Class_1_15D62275ABED373C_TypeDefinitionIndex = 51278;

class Class_1_15D62275ABED373C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_AE7DD6BAFB8C2EE9*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_D93D2303F1967C64()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_D93D2303F1967C64_OFFSET))(this);
	}

	::System::Void Method_1_44EDEAE08395A153(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_AE7DD6BAFB8C2EE9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_AE7DD6BAFB8C2EE9*>*))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_44EDEAE08395A153_OFFSET))(this, a1);
	}

	::System::String* Method_1_D93D2303F1967C64_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_D93D2303F1967C64_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* Method_1_B40CF9A3C06C2AB8()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_B40CF9A3C06C2AB8_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_AE7DD6BAFB8C2EE9*>* Method_1_1685BD3810865B7C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_AE7DD6BAFB8C2EE9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_1685BD3810865B7C_OFFSET))(this);
	}

	::System::Void Method_1_19E47129E79234ED(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_15D62275ABED373C_METHOD_1_19E47129E79234ED_OFFSET))(this, a1);
	}
};
