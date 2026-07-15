#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AF02CFE638CE6933;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CEDF380BFE8D93F_METHOD_1_132236F1E969BA8D_OFFSET UNITYSDK_OFFSET(0x14FF2BB0)
#define CLASS_1_4CEDF380BFE8D93F_METHOD_1_65FC9766F37B76C6_OFFSET UNITYSDK_OFFSET(0x14FF2CD0)
#define CLASS_1_4CEDF380BFE8D93F_METHOD_1_EDDFE9D4C5D04628_OFFSET UNITYSDK_OFFSET(0x14FF3030)
#define CLASS_1_4CEDF380BFE8D93F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14FF2E60)
#define CLASS_1_4CEDF380BFE8D93F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14FF29E0)
#define CLASS_1_4CEDF380BFE8D93F__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF2990)

inline static constexpr unsigned int Class_1_4CEDF380BFE8D93F_TypeDefinitionIndex = 49641;

class Class_1_4CEDF380BFE8D93F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AF02CFE638CE6933*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CEDF380BFE8D93F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CEDF380BFE8D93F*))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_132236F1E969BA8D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F_METHOD_1_132236F1E969BA8D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_65FC9766F37B76C6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F_METHOD_1_65FC9766F37B76C6_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_EDDFE9D4C5D04628()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEDF380BFE8D93F_METHOD_1_EDDFE9D4C5D04628_OFFSET))(this);
	}
};
