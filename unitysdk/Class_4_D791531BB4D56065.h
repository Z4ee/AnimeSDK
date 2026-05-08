#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_1_6F763FE7425E8072;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_D791531BB4D56065_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13DB7760)
#define CLASS_4_D791531BB4D56065_METHOD_4_514C44711E393019_OFFSET UNITYSDK_OFFSET(0x13DB79C0)
#define CLASS_4_D791531BB4D56065_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13DB7930)
#define CLASS_4_D791531BB4D56065_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13DB7830)
#define CLASS_4_D791531BB4D56065__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DB77B0)
#define CLASS_4_D791531BB4D56065__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB78A0)

inline static constexpr unsigned int Class_4_D791531BB4D56065_TypeDefinitionIndex = 66040;

class Class_4_D791531BB4D56065 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21B; // 0x0
	::System::Collections::Generic::List_1<::Class_1_6F763FE7425E8072*>* Field_4_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_D791531BB4D56065* Method_4_514C44711E393019()
	{
		return ((::Class_4_D791531BB4D56065*(*)())((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_METHOD_4_514C44711E393019_OFFSET))();
	}
};
