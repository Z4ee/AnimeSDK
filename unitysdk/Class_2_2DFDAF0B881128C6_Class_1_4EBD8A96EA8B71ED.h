#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_355;
class Class_2_2DFDAF0B881128C6_Class_1_E2EAEB159D32F976;
class Class_2_3B1E761D184CCDAF;
class Class_3_1F0B390B50451710;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xEFEBA90)
#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_9F70EA32F370861C_OFFSET UNITYSDK_OFFSET(0xEFEACF0)
#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_AEFB51B41A1D5BA1_OFFSET UNITYSDK_OFFSET(0xEFEB740)
#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_E52B5DBBAF5BA809_OFFSET UNITYSDK_OFFSET(0xEFEB7D0)
#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_F05A31E4E1E29FCF_OFFSET UNITYSDK_OFFSET(0xEFEB4F0)
#define CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED__CTOR_OFFSET UNITYSDK_OFFSET(0xEFEAB00)

inline static constexpr unsigned int Class_2_2DFDAF0B881128C6_Class_1_4EBD8A96EA8B71ED_TypeDefinitionIndex = 50349;

class Class_2_2DFDAF0B881128C6_Class_1_4EBD8A96EA8B71ED : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::Class_2_3B1E761D184CCDAF*>* Field_1_5; // 0x10
	::Class_2_208CC9941471731A_355* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x20
	::Class_2_2DFDAF0B881128C6_Class_1_E2EAEB159D32F976* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x30
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9F70EA32F370861C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_9F70EA32F370861C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F05A31E4E1E29FCF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_F05A31E4E1E29FCF_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_AEFB51B41A1D5BA1(::Class_3_1F0B390B50451710* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_1F0B390B50451710*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_AEFB51B41A1D5BA1_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_E52B5DBBAF5BA809(::Class_2_3B1E761D184CCDAF* a1, ::Class_2_3B1E761D184CCDAF* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_E52B5DBBAF5BA809_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DFDAF0B881128C6_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_08BBACE844405300_OFFSET))(this);
	}
};
