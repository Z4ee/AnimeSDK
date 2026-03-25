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

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x15D80F50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x15D80EB0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSIONMINLENGTH_OFFSET UNITYSDK_OFFSET(0x15D80E30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x15D80E10)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x15D80E70)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x15D80E90)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x15D80DF0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET UNITYSDK_OFFSET(0x15D80ED0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SEQUENCEPOOL_OFFSET UNITYSDK_OFFSET(0x15D80EF0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_STANDARD_OFFSET UNITYSDK_OFFSET(0x15D80C10)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x15D80E50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x15D80EC0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSIONMINLENGTH_OFFSET UNITYSDK_OFFSET(0x15D80E40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x15D80E20)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x15D80E80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x15D80EA0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x15D80E00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET UNITYSDK_OFFSET(0x15D80EE0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SEQUENCEPOOL_OFFSET UNITYSDK_OFFSET(0x15D80F00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x15D80E60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET UNITYSDK_OFFSET(0x15D80F10)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D81020)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15D80D00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x15D80C40)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_TypeDefinitionIndex = 9084;

	class MessagePackSerializerOptions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_DisallowedTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0x233A0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_AssemblyNameVersionSelectorRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0x233A8);
		}
		::MessagePack::MessagePackSecurity* _Security_k__BackingField; // 0x10
		::MessagePack::SequencePool* _SequencePool_k__BackingField; // 0x18
		::MessagePack::IFormatterResolver* _Resolver_k__BackingField; // 0x20
		::MessagePack::MessagePackCompression _Compression_k__BackingField; // 0x28
		::System::Int32 _SuggestedContiguousMemorySize_k__BackingField; // 0x2C
		::System::Boolean _AllowAssemblyVersionMismatch_k__BackingField; // 0x30
		::System::Boolean _OmitAssemblyVersion_k__BackingField; // 0x31
		::System::Nullable_1<::System::Boolean> _OldSpec_k__BackingField; // 0x32
		::System::Int32 _CompressionMinLength_k__BackingField; // 0x34

		::System::Void _ctor(::MessagePack::IFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET))(this, resolver);
		}

		::System::Void _ctor_1(::MessagePack::MessagePackSerializerOptions* copyFrom)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET))(this, copyFrom);
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

		::System::Void set_Resolver(::MessagePack::IFormatterResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET))(this, value);
		}

		::MessagePack::MessagePackCompression get_Compression()
		{
			return ((::MessagePack::MessagePackCompression(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET))(this);
		}

		::System::Void set_Compression(::MessagePack::MessagePackCompression value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET))(this, value);
		}

		::System::Int32 get_CompressionMinLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSIONMINLENGTH_OFFSET))(this);
		}

		::System::Void set_CompressionMinLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSIONMINLENGTH_OFFSET))(this, value);
		}

		::System::Int32 get_SuggestedContiguousMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET))(this);
		}

		::System::Void set_SuggestedContiguousMemorySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SUGGESTEDCONTIGUOUSMEMORYSIZE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_OldSpec()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET))(this);
		}

		::System::Void set_OldSpec(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET))(this, value);
		}

		::System::Boolean get_OmitAssemblyVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET))(this);
		}

		::System::Void set_OmitAssemblyVersion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET))(this, value);
		}

		::System::Boolean get_AllowAssemblyVersionMismatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this);
		}

		::System::Void set_AllowAssemblyVersionMismatch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this, value);
		}

		::MessagePack::MessagePackSecurity* get_Security()
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET))(this);
		}

		::System::Void set_Security(::MessagePack::MessagePackSecurity* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET))(this, value);
		}

		::MessagePack::SequencePool* get_SequencePool()
		{
			return ((::MessagePack::SequencePool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SEQUENCEPOOL_OFFSET))(this);
		}

		::System::Void set_SequencePool(::MessagePack::SequencePool* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SEQUENCEPOOL_OFFSET))(this, value);
		}

		::MessagePack::MessagePackSerializerOptions* WithResolver(::MessagePack::IFormatterResolver* resolver)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET))(this, resolver);
		}

		::MessagePack::MessagePackSerializerOptions* Clone()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET))(this);
		}
	};
}
