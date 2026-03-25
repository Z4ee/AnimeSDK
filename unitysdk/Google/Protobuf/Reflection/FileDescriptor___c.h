#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B06A50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B06A90)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DETERMINEPUBLICDEPENDENCIES_B__9_0_OFFSET UNITYSDK_OFFSET(0x15B06AA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONSFROMMESSAGE_B__52_0_OFFSET UNITYSDK_OFFSET(0x15B06B50)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONS_B__51_0_OFFSET UNITYSDK_OFFSET(0x15B06B30)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLGENERATEDEXTENSIONS_B__50_0_OFFSET UNITYSDK_OFFSET(0x15B06B20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor___c_TypeDefinitionIndex = 6331;

	class FileDescriptor___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Google::Protobuf::Reflection::FileDescriptor*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FileDescriptor*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptor___c_TypeDefinitionIndex)->GetStaticField(0xCEE0);
		}
		static ::System::Func_2<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptor___c_TypeDefinitionIndex)->GetStaticField(0xCEE8);
		}
		static ::Google::Protobuf::Reflection::FileDescriptor___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptor___c_TypeDefinitionIndex)->GetStaticField(0xCEF0);
		}
		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptor___c_TypeDefinitionIndex)->GetStaticField(0xCEF8);
		}
		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptor___c_TypeDefinitionIndex)->GetStaticField(0xCF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__CTOR_OFFSET))(this);
		}

		::System::String* _DeterminePublicDependencies_b__9_0(::Google::Protobuf::Reflection::FileDescriptor* file)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DETERMINEPUBLICDEPENDENCIES_B__9_0_OFFSET))(this, file);
		}

		::System::Boolean _GetAllGeneratedExtensions_b__50_0(::Google::Protobuf::Reflection::GeneratedClrTypeInfo* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLGENERATEDEXTENSIONS_B__50_0_OFFSET))(this, t);
		}

		::Google::Protobuf::Extension* _GetAllDependedExtensions_b__51_0(::Google::Protobuf::Reflection::FieldDescriptor* s)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONS_B__51_0_OFFSET))(this, s);
		}

		::Google::Protobuf::Extension* _GetAllDependedExtensionsFromMessage_b__52_0(::Google::Protobuf::Reflection::FieldDescriptor* s)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONSFROMMESSAGE_B__52_0_OFFSET))(this, s);
		}
	};
}
