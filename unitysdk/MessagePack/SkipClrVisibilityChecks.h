#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SkipClrVisibilityChecks___c__DisplayClass9_0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1_Builder; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class AssemblyBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_EMITMAGICATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17388630)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_GETMAGICATTRIBUTECTOR_OFFSET UNITYSDK_OFFSET(0x173885B0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_GETSKIPVISIBILITYCHECKSREQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x17387A10)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_SKIPVISIBILITYCHECKSFOR_1_OFFSET UNITYSDK_OFFSET(0x17388490)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_SKIPVISIBILITYCHECKSFOR_OFFSET UNITYSDK_OFFSET(0x173881A0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x173886A0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__CTOR_OFFSET UNITYSDK_OFFSET(0x17387940)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__GETSKIPVISIBILITYCHECKSREQUIREMENTS_G__ADDTYPEIFNONPUBLIC_9_1_OFFSET UNITYSDK_OFFSET(0x17387C90)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__GETSKIPVISIBILITYCHECKSREQUIREMENTS_G__SCANDIRECTTYPE_9_0_OFFSET UNITYSDK_OFFSET(0x17387DF0)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks_TypeDefinitionIndex = 9287;

	class SkipClrVisibilityChecks : public ::System::Object
	{
	public:
		static ::System::Reflection::ConstructorInfo** StaticGet_AttributeBaseClassCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_TypeDefinitionIndex)->GetStaticField(0x42650);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_AttributeUsageCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_TypeDefinitionIndex)->GetStaticField(0x42658);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_AttributeUsageAllowMultipleProperty()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_TypeDefinitionIndex)->GetStaticField(0x42660);
		}
		static ::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>** StaticGet_EmptySet()
		{
			return (::System::Collections::Immutable::ImmutableHashSet_1<::System::Reflection::AssemblyName*>**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_TypeDefinitionIndex)->GetStaticField(0x42668);
		}
		::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder; // 0x10
		::System::Reflection::ConstructorInfo* magicAttributeCtor; // 0x18
		::System::Reflection::Emit::ModuleBuilder* moduleBuilder; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* attributedAssemblyNames; // 0x28

		::System::Void _ctor(::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder, ::System::Reflection::Emit::ModuleBuilder* moduleBuilder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::AssemblyBuilder*, ::System::Reflection::Emit::ModuleBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__CTOR_OFFSET))(this, assemblyBuilder, moduleBuilder);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__CCTOR_OFFSET))();
		}

		static ::System::Void GetSkipVisibilityChecksRequirements(::System::Reflection::TypeInfo* typeInfo, ::System::Collections::Immutable::ImmutableHashSet_1_Builder<::System::Reflection::AssemblyName*>* referencedAssemblies)
		{
			return ((::System::Void(*)(::System::Reflection::TypeInfo*, ::System::Collections::Immutable::ImmutableHashSet_1_Builder<::System::Reflection::AssemblyName*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_GETSKIPVISIBILITYCHECKSREQUIREMENTS_OFFSET))(typeInfo, referencedAssemblies);
		}

		::System::Void SkipVisibilityChecksFor(::System::Collections::Generic::IEnumerable_1<::System::Reflection::AssemblyName*>* assemblyNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::AssemblyName*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_SKIPVISIBILITYCHECKSFOR_OFFSET))(this, assemblyNames);
		}

		::System::Void SkipVisibilityChecksFor_1(::System::Reflection::AssemblyName* assemblyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_SKIPVISIBILITYCHECKSFOR_1_OFFSET))(this, assemblyName);
		}

		::System::Reflection::ConstructorInfo* GetMagicAttributeCtor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_GETMAGICATTRIBUTECTOR_OFFSET))(this);
		}

		::System::Reflection::TypeInfo* EmitMagicAttribute()
		{
			return ((::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_EMITMAGICATTRIBUTE_OFFSET))(this);
		}

		static ::System::Void _GetSkipVisibilityChecksRequirements_g__ScanDirectType_9_0(::System::Reflection::TypeInfo* typeInfo, ::MessagePack::SkipClrVisibilityChecks___c__DisplayClass9_0& a2)
		{
			return ((::System::Void(*)(::System::Reflection::TypeInfo*, ::MessagePack::SkipClrVisibilityChecks___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__GETSKIPVISIBILITYCHECKSREQUIREMENTS_G__SCANDIRECTTYPE_9_0_OFFSET))(typeInfo, a2);
		}

		static ::System::Void _GetSkipVisibilityChecksRequirements_g__AddTypeIfNonPublic_9_1(::System::Type* type, ::MessagePack::SkipClrVisibilityChecks___c__DisplayClass9_0& a2)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::SkipClrVisibilityChecks___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS__GETSKIPVISIBILITYCHECKSREQUIREMENTS_G__ADDTYPEIFNONPUBLIC_9_1_OFFSET))(type, a2);
		}
	};
}
