#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F77C29215C186ABC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8825550)
#define CLASS_1_F77C29215C186ABC_METHOD_1_074FA393DEF13865_OFFSET UNITYSDK_OFFSET(0x88257E0)
#define CLASS_1_F77C29215C186ABC_METHOD_1_653D5DB2D5C019FD_OFFSET UNITYSDK_OFFSET(0x8825610)
#define CLASS_1_F77C29215C186ABC_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x88253F0)
#define CLASS_1_F77C29215C186ABC__CTOR_OFFSET UNITYSDK_OFFSET(0x88254D0)

inline static constexpr unsigned int Class_1_F77C29215C186ABC_TypeDefinitionIndex = 56803;

class Class_1_F77C29215C186ABC : public ::System::Object
{
public:
	static ::Class_1_F77C29215C186ABC** StaticGet_Field_1_1()
	{
		return (::Class_1_F77C29215C186ABC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F77C29215C186ABC_TypeDefinitionIndex)->GetStaticField(0x48C10);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IRIFBXLodSizeConfig*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77C29215C186ABC__CTOR_OFFSET))(this);
	}

	static ::Class_1_F77C29215C186ABC* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_F77C29215C186ABC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F77C29215C186ABC_METHOD_1_F2B94768004EB1C1_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77C29215C186ABC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_653D5DB2D5C019FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F77C29215C186ABC_METHOD_1_653D5DB2D5C019FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::IRIFBXLodSizeConfig* Method_1_074FA393DEF13865(::System::String* a1)
	{
		return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F77C29215C186ABC_METHOD_1_074FA393DEF13865_OFFSET))(this, a1);
	}
};
