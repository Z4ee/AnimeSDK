#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackCompression.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSecurity; }
namespace MessagePack { class SequencePool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x18189780)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x181896E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSIONMINLENGTH_OFFSET UNITYSDK_OFFSET(0x18189660)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x18189640)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x181896A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x181896C0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x18189620)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET UNITYSDK_OFFSET(0x18189700)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SEQUENCEPOOL_OFFSET UNITYSDK_OFFSET(0x18189720)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_STANDARD_OFFSET UNITYSDK_OFFSET(0x18189440)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x18189680)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x181896F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSIONMINLENGTH_OFFSET UNITYSDK_OFFSET(0x18189670)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x18189650)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x181896B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x181896D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x18189630)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET UNITYSDK_OFFSET(0x18189710)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SEQUENCEPOOL_OFFSET UNITYSDK_OFFSET(0x18189730)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x18189690)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET UNITYSDK_OFFSET(0x18189740)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18189850)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18189530)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18189470)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_TypeDefinitionIndex = 7184;

	class MessagePackSerializerOptions : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_AssemblyNameVersionSelectorRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0xA2D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_DisallowedTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0xA2D8);
		}
		::MessagePack::SequencePool* _SequencePool_k__BackingField; // 0x10
		::MessagePack::IFormatterResolver* _Resolver_k__BackingField; // 0x18
		::MessagePack::MessagePackSecurity* _Security_k__BackingField; // 0x20
		::System::Int32 _CompressionMinLength_k__BackingField; // 0x28
		::System::Int32 _SuggestedContiguousMemorySize_k__BackingField; // 0x2C
		::MessagePack::MessagePackCompression _Compression_k__BackingField; // 0x30
		::System::Nullable_1<::System::Boolean> _OldSpec_k__BackingField; // 0x34
		::System::Boolean _OmitAssemblyVersion_k__BackingField; // 0x36
		::System::Boolean _AllowAssemblyVersionMismatch_k__BackingField; // 0x37

		::System::Void _ctor(::MessagePack::IFormatterResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MessagePack::MessagePackSerializerOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_Standard()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_STANDARD_OFFSET))();
		}

		::MessagePack::IFormatterResolver* get_Resolver()
		{
			return ((::MessagePack::IFormatterResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_RESOLVER_OFFSET))(this);
		}

		::System::Void set_Resolver(::MessagePack::IFormatterResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET))(this, a1);
		}

		::MessagePack::MessagePackCompression get_Compression()
		{
			return ((::MessagePack::MessagePackCompression(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET))(this);
		}

		::System::Void set_Compression(::MessagePack::MessagePackCompression a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET))(this, a1);
		}

		::System::Int32 get_CompressionMinLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSIONMINLENGTH_OFFSET))(this);
		}

		::System::Void set_CompressionMinLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSIONMINLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 get_SuggestedContiguousMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET))(this);
		}

		::System::Void set_SuggestedContiguousMemorySize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_OldSpec()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET))(this);
		}

		::System::Void set_OldSpec(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET))(this, a1);
		}

		::System::Boolean get_OmitAssemblyVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET))(this);
		}

		::System::Void set_OmitAssemblyVersion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowAssemblyVersionMismatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this);
		}

		::System::Void set_AllowAssemblyVersionMismatch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this, a1);
		}

		::MessagePack::MessagePackSecurity* get_Security()
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET))(this);
		}

		::System::Void set_Security(::MessagePack::MessagePackSecurity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET))(this, a1);
		}

		::MessagePack::SequencePool* get_SequencePool()
		{
			return ((::MessagePack::SequencePool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SEQUENCEPOOL_OFFSET))(this);
		}

		::System::Void set_SequencePool(::MessagePack::SequencePool* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SEQUENCEPOOL_OFFSET))(this, a1);
		}

		::MessagePack::MessagePackSerializerOptions* WithResolver(::MessagePack::IFormatterResolver* a1)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET))(this, a1);
		}

		::MessagePack::MessagePackSerializerOptions* Clone()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET))(this);
		}
	};
}
