#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher_DiffResult; }
namespace Foundation { class ExceptionInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1877EE50)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CHECKSPACEENOUGH_B__31_0_OFFSET UNITYSDK_OFFSET(0x1877EFC0)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1877EE90)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_0_OFFSET UNITYSDK_OFFSET(0x1877EEA0)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_1_OFFSET UNITYSDK_OFFSET(0x1877EF20)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_2_OFFSET UNITYSDK_OFFSET(0x1877EFB0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher___c_TypeDefinitionIndex = 63145;

	class DownloadDiffPatcher___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Foundation::ExceptionInfo*>** StaticGet___9__28_2()
		{
			return (::System::Action_1<::Foundation::ExceptionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x2EE90);
		}
		static ::Foundation::DownloadDiffPatcher___c** StaticGet___9()
		{
			return (::Foundation::DownloadDiffPatcher___c**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x2EE98);
		}
		static ::System::Func_2<::Foundation::DownloadDiffPatcher_DiffResult*, ::Foundation::ExceptionInfo*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Foundation::DownloadDiffPatcher_DiffResult*, ::Foundation::ExceptionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x2EEA0);
		}
		static ::System::Func_2<::Foundation::DownloadDiffPatcher_DiffResult*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Foundation::DownloadDiffPatcher_DiffResult*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x2EEA8);
		}
		static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x2EEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Finish_b__28_0(::Foundation::DownloadDiffPatcher_DiffResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_0_OFFSET))(this, result);
		}

		::Foundation::ExceptionInfo* _Finish_b__28_1(::Foundation::DownloadDiffPatcher_DiffResult* result)
		{
			return ((::Foundation::ExceptionInfo*(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_1_OFFSET))(this, result);
		}

		::System::Void _Finish_b__28_2(::Foundation::ExceptionInfo* error)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ExceptionInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_2_OFFSET))(this, error);
		}

		::System::Int64 _CheckSpaceEnough_b__31_0(::Struct_2_DAA84C1CDD754F37 filePickInfo)
		{
			return ((::System::Int64(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CHECKSPACEENOUGH_B__31_0_OFFSET))(this, filePickInfo);
		}
	};
}
