#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownField; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_ADDORREPLACEFIELD_OFFSET UNITYSDK_OFFSET(0x1B8848D0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B86F7D0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CLONE_OFFSET UNITYSDK_OFFSET(0x1B86E080)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B883EA0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B86E970)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETORADDFIELD_OFFSET UNITYSDK_OFFSET(0x1B884720)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_HASFIELD_OFFSET UNITYSDK_OFFSET(0x1B883D60)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_1_OFFSET UNITYSDK_OFFSET(0x1B870200)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_OFFSET UNITYSDK_OFFSET(0x1B884A60)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELD_OFFSET UNITYSDK_OFFSET(0x1B885230)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B86FFA0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B884D80)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B86F270)
#define GOOGLE_PROTOBUF_UNKNOWNFIELDSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B883CD0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int UnknownFieldSet_TypeDefinitionIndex = 5414;

	class UnknownFieldSet : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownField* lastField; // 0x10
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::Google::Protobuf::UnknownField*>* fields; // 0x18
		::System::Int32 lastFieldNumber; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET__CTOR_OFFSET))(this);
		}

		::System::Boolean HasField(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_HASFIELD_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETHASHCODE_OFFSET))(this);
		}

		::Google::Protobuf::UnknownField* GetOrAddField(::System::Int32 a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_GETORADDFIELD_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownFieldSet* AddOrReplaceField(::System::Int32 a1, ::Google::Protobuf::UnknownField* a2)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_ADDORREPLACEFIELD_OFFSET))(this, a1, a2);
		}

		::System::Boolean MergeFieldFrom(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_OFFSET))(this, a1);
		}

		static ::Google::Protobuf::UnknownFieldSet* MergeFieldFrom_1(::Google::Protobuf::UnknownFieldSet* a1, ::Google::Protobuf::CodedInputStream* a2)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELDFROM_1_OFFSET))(a1, a2);
		}

		::Google::Protobuf::UnknownFieldSet* MergeFrom(::Google::Protobuf::UnknownFieldSet* a1)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_OFFSET))(this, a1);
		}

		static ::Google::Protobuf::UnknownFieldSet* MergeFrom_1(::Google::Protobuf::UnknownFieldSet* a1, ::Google::Protobuf::UnknownFieldSet* a2)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFROM_1_OFFSET))(a1, a2);
		}

		::Google::Protobuf::UnknownFieldSet* MergeField(::System::Int32 a1, ::Google::Protobuf::UnknownField* a2)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_MERGEFIELD_OFFSET))(this, a1, a2);
		}

		static ::Google::Protobuf::UnknownFieldSet* Clone(::Google::Protobuf::UnknownFieldSet* a1)
		{
			return ((::Google::Protobuf::UnknownFieldSet*(*)(::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELDSET_CLONE_OFFSET))(a1);
		}
	};
}
