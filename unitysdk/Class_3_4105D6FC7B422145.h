#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_9FD26085F85DA330.h"
#include "unitysdk/Struct_2_D235A7D760E7915C.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class Tween; }
namespace MoleMole::Config { class ConfigHollowChessboardScreenUI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class Class_3_4105D6FC7B422145_Class_3_4E18D6856950D32F;

#define CLASS_3_4105D6FC7B422145_METHOD_3_02182D02677D9B50_OFFSET UNITYSDK_OFFSET(0x1906D2B0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_05347DDA1DB672E2_OFFSET UNITYSDK_OFFSET(0x1906BFF0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_1_OFFSET UNITYSDK_OFFSET(0x1906D5B0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_2_OFFSET UNITYSDK_OFFSET(0x1906D8F0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_OFFSET UNITYSDK_OFFSET(0x1906D750)
#define CLASS_3_4105D6FC7B422145_METHOD_3_3BC363AB34A20FB3_OFFSET UNITYSDK_OFFSET(0x1906CC00)
#define CLASS_3_4105D6FC7B422145_METHOD_3_4D75C8ADA4074FB6_OFFSET UNITYSDK_OFFSET(0x1906DB50)
#define CLASS_3_4105D6FC7B422145_METHOD_3_5855525A2684D673_OFFSET UNITYSDK_OFFSET(0x1906CC60)
#define CLASS_3_4105D6FC7B422145_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1906BF50)
#define CLASS_3_4105D6FC7B422145_METHOD_3_9BB60DB047D1EF98_OFFSET UNITYSDK_OFFSET(0x1906C060)
#define CLASS_3_4105D6FC7B422145_METHOD_3_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x1906E7E0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1906E970)
#define CLASS_3_4105D6FC7B422145_METHOD_3_DCCCC0BCA742D290_1_OFFSET UNITYSDK_OFFSET(0x1906E5B0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_DCCCC0BCA742D290_OFFSET UNITYSDK_OFFSET(0x1906E670)
#define CLASS_3_4105D6FC7B422145_METHOD_3_DFDC8B0EF9883FD8_1_OFFSET UNITYSDK_OFFSET(0x1906E730)
#define CLASS_3_4105D6FC7B422145_METHOD_3_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x1906DE40)
#define CLASS_3_4105D6FC7B422145_METHOD_3_E1268E76672F9634_OFFSET UNITYSDK_OFFSET(0x1906DEF0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_1_OFFSET UNITYSDK_OFFSET(0x1906DA90)
#define CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_2_OFFSET UNITYSDK_OFFSET(0x1906E4F0)
#define CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_OFFSET UNITYSDK_OFFSET(0x1906CB40)
#define CLASS_3_4105D6FC7B422145_METHOD_3_FAA048A06FBF37E8_OFFSET UNITYSDK_OFFSET(0x1906C130)
#define CLASS_3_4105D6FC7B422145__CCTOR_OFFSET UNITYSDK_OFFSET(0x1906C8E0)
#define CLASS_3_4105D6FC7B422145__CTOR_OFFSET UNITYSDK_OFFSET(0x1906BED0)

inline static constexpr unsigned int Class_3_4105D6FC7B422145_TypeDefinitionIndex = 82952;

class Class_3_4105D6FC7B422145 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	static ::System::Collections::Generic::List_1<::Class_3_4105D6FC7B422145_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_3_4105D6FC7B422145_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4105D6FC7B422145_TypeDefinitionIndex)->GetStaticField(0x36550);
	}
	::Struct_2_D235A7D760E7915C Field_3_5; // 0x28
	::Il2CppArray<::System::Char>* Field_3_10; // 0x48
	::System::String* Field_3_6; // 0x50
	::DG::Tweening::Tween* Field_3_11; // 0x58
	::System::Single Field_3_8; // 0x60
	::System::Int32 Field_3_3; // 0x64
	::System::Int32 Field_3_7; // 0x68
	::System::Single Field_3_12; // 0x6C
	::System::Single Field_3_9; // 0x70
	::System::Int32 Field_3_2; // 0x74
	::System::Boolean Field_3_4; // 0x78
	::System::Int32 Field_3_1; // 0x7C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145__CCTOR_OFFSET))();
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_9BB60DB047D1EF98(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_9BB60DB047D1EF98_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_3_E9A75243893712EF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_OFFSET))();
	}

	::System::Void Method_3_FAA048A06FBF37E8(::Struct_2_6E23A591AC26A31E& a1, ::Struct_2_9FD26085F85DA330& a2, ::System::Single a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::Struct_2_9FD26085F85DA330&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_FAA048A06FBF37E8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_30CE2489E2596166()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_OFFSET))(this);
	}

	static ::System::Single Method_3_E9A75243893712EF_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_1_OFFSET))();
	}

	::System::String* Method_3_4D75C8ADA4074FB6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_4D75C8ADA4074FB6_OFFSET))(this, a1);
	}

	::System::Void Method_3_05347DDA1DB672E2(::DG::Tweening::Tween* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_05347DDA1DB672E2_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardScreenUI* Method_3_3BC363AB34A20FB3()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardScreenUI*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_3BC363AB34A20FB3_OFFSET))();
	}

	::System::Void Method_3_E1268E76672F9634(::Struct_2_D235A7D760E7915C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D235A7D760E7915C))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_E1268E76672F9634_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5855525A2684D673()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_5855525A2684D673_OFFSET))(this);
	}

	static ::System::String* Method_3_DCCCC0BCA742D290()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_DCCCC0BCA742D290_OFFSET))();
	}

	::System::Void Method_3_02182D02677D9B50(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_02182D02677D9B50_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_3_DFDC8B0EF9883FD8_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_DFDC8B0EF9883FD8_1_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_30CE2489E2596166_1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_30CE2489E2596166_2()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_30CE2489E2596166_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_E9A75243893712EF_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_E9A75243893712EF_2_OFFSET))();
	}

	::System::Single Method_3_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_9F86FD0988591376_OFFSET))(this);
	}

	static ::System::String* Method_3_DCCCC0BCA742D290_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4105D6FC7B422145_METHOD_3_DCCCC0BCA742D290_1_OFFSET))();
	}
};
