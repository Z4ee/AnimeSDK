#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_EA67DE3E7B7C743B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E7DAE994C565ED1F_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169DEC80)
#define CLASS_3_E7DAE994C565ED1F_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x169DEF00)
#define CLASS_3_E7DAE994C565ED1F_1_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x169DEDF0)
#define CLASS_3_E7DAE994C565ED1F_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169DEBE0)
#define CLASS_3_E7DAE994C565ED1F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x169DECD0)
#define CLASS_3_E7DAE994C565ED1F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x169DED50)

inline static constexpr unsigned int Class_3_E7DAE994C565ED1F_1_TypeDefinitionIndex = 74081;

class Class_3_E7DAE994C565ED1F_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x4A; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA67DE3E7B7C743B*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_E7DAE994C565ED1F_1* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_E7DAE994C565ED1F_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7DAE994C565ED1F_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
