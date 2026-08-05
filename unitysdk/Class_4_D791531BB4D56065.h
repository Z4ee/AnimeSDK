#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"

class Class_1_6F763FE7425E8072;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_D791531BB4D56065_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18B41530)
#define CLASS_4_D791531BB4D56065_METHOD_4_514C44711E393019_OFFSET UNITYSDK_OFFSET(0x18B41700)
#define CLASS_4_D791531BB4D56065_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18B41800)
#define CLASS_4_D791531BB4D56065_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18B41600)
#define CLASS_4_D791531BB4D56065__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B41580)
#define CLASS_4_D791531BB4D56065__CTOR_OFFSET UNITYSDK_OFFSET(0x18B41670)

inline static constexpr unsigned int Class_4_D791531BB4D56065_TypeDefinitionIndex = 63997;

class Class_4_D791531BB4D56065 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x21B; // 0x0
	::System::Collections::Generic::List_1<::Class_1_6F763FE7425E8072*>* Field_4_0; // 0x50

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

	static ::Class_4_D791531BB4D56065* Method_4_514C44711E393019()
	{
		return ((::Class_4_D791531BB4D56065*(*)())((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_METHOD_4_514C44711E393019_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D791531BB4D56065_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
