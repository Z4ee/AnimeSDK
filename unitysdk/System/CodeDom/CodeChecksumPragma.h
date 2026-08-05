#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeDirective.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_CHECKSUMALGORITHMID_OFFSET UNITYSDK_OFFSET(0x1DEADEE0)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_CHECKSUMDATA_OFFSET UNITYSDK_OFFSET(0x1DEADF60)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1DEADFE0)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_CHECKSUMALGORITHMID_OFFSET UNITYSDK_OFFSET(0x1DEADF20)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_CHECKSUMDATA_OFFSET UNITYSDK_OFFSET(0x1DEADFA0)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1DEAE020)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEADEA0)
#define SYSTEM_CODEDOM_CODECHECKSUMPRAGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEADE60)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeChecksumPragma_TypeDefinitionIndex = 4248;

	class CodeChecksumPragma : public ::System::CodeDom::CodeDirective
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Guid checksumAlgorithmId, ::Il2CppArray<::System::Byte>* checksumData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA__CTOR_1_OFFSET))(this, fileName, checksumAlgorithmId, checksumData);
		}

		::System::Guid get_ChecksumAlgorithmId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_CHECKSUMALGORITHMID_OFFSET))(this);
		}

		::System::Void set_ChecksumAlgorithmId(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_CHECKSUMALGORITHMID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_ChecksumData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_CHECKSUMDATA_OFFSET))(this);
		}

		::System::Void set_ChecksumData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_CHECKSUMDATA_OFFSET))(this, value);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECHECKSUMPRAGMA_SET_FILENAME_OFFSET))(this, value);
		}
	};
}
