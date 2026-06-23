#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A5136246E588D6D;
class Class_1_9F3D5D601B086F88;
class Class_2_208CC9941471731A_1074;
class Class_2_208CC9941471731A_458;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C83ECDA6146AF10_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x114575C0)
#define CLASS_1_8C83ECDA6146AF10_METHOD_1_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x11457450)
#define CLASS_1_8C83ECDA6146AF10_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x11456F30)
#define CLASS_1_8C83ECDA6146AF10__CTOR_OFFSET UNITYSDK_OFFSET(0x11456CE0)

inline static constexpr unsigned int Class_1_8C83ECDA6146AF10_TypeDefinitionIndex = 86910;

class Class_1_8C83ECDA6146AF10 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9F3D5D601B086F88*>* Field_1_2; // 0x10
	::Class_1_8A5136246E588D6D* Field_1_1; // 0x18
	::Class_2_208CC9941471731A_458* Field_1_3; // 0x20
	::Class_2_208CC9941471731A_1074* Field_1_4; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor(::Class_1_8A5136246E588D6D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A5136246E588D6D*))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10_METHOD_1_9C844AB9164FA35A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9F3D5D601B086F88*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9F3D5D601B086F88*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
