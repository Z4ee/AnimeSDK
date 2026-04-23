#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownField; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_ADDORREPLACEFIELD_OFFSET UNITYSDK_OFFSET(0x171268C0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17112A80)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CLONE_OFFSET UNITYSDK_OFFSET(0x171116C0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x171261D0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171120B0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETORADDFIELD_OFFSET UNITYSDK_OFFSET(0x17126770)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_HASFIELD_OFFSET UNITYSDK_OFFSET(0x171260F0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_1_OFFSET UNITYSDK_OFFSET(0x17113320)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_OFFSET UNITYSDK_OFFSET(0x171269F0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELD_OFFSET UNITYSDK_OFFSET(0x17127090)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x171130C0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17126D70)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_WRITETO_OFFSET UNITYSDK_OFFSET(0x171126A0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17126060)

namespace Google::Protobuf
{
	inline static constexpr unsigned int UnknownFieldSet_TypeDefinitionIndex = 6211;

	class UnknownFieldSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::Google::Protobuf::UnknownField*>* fields; // 0x10
		::Google::Protobuf::UnknownField* lastField; // 0x18
		::System::Int32 lastFieldNumber; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET__CTOR_OFFSET))(this);
		}

		::System::Boolean HasField(::System::Int32 field)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_HASFIELD_OFFSET))(this, field);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETHASHCODE_OFFSET))(this);
		}

		::Google::Protobuf::UnknownField* GetOrAddField(::System::Int32 number)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETORADDFIELD_OFFSET))(this, number);
		}

		::Google::Protobuf::UnknownFieldSet* AddOrReplaceField(::System::Int32 number, ::Google::Protobuf::UnknownField* field)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_ADDORREPLACEFIELD_OFFSET))(this, number, field);
		}

		::System::Boolean MergeFieldFrom(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_OFFSET))(this, input);
		}

		static ::Google::Protobuf::UnknownFieldSet* MergeFieldFrom_1(::Google::Protobuf::UnknownFieldSet* unknownFields, ::Google::Protobuf::CodedInputStream* input)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_1_OFFSET))(unknownFields, input);
		}

		::Google::Protobuf::UnknownFieldSet* MergeFrom(::Google::Protobuf::UnknownFieldSet* other)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_OFFSET))(this, other);
		}

		static ::Google::Protobuf::UnknownFieldSet* MergeFrom_1(::Google::Protobuf::UnknownFieldSet* unknownFields, ::Google::Protobuf::UnknownFieldSet* other)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_1_OFFSET))(unknownFields, other);
		}

		::Google::Protobuf::UnknownFieldSet* MergeField(::System::Int32 number, ::Google::Protobuf::UnknownField* field)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELD_OFFSET))(this, number, field);
		}

		static ::Google::Protobuf::UnknownFieldSet* Clone(::Google::Protobuf::UnknownFieldSet* other)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CLONE_OFFSET))(other);
		}
	};
}
