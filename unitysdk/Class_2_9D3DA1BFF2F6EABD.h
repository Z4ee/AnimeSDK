#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BF31F3092BDFD9E.h"

class Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace RPG::Client { class WolfBroGunPlayRogue; }
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D3DA1BFF2F6EABD_GET_REPLACECOUNT_OFFSET UNITYSDK_OFFSET(0x1508D6D0)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x1508D6F0)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_1577395D9A9E4AFA_OFFSET UNITYSDK_OFFSET(0x1508C920)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_3091BBD11FD1CB39_OFFSET UNITYSDK_OFFSET(0x1508D370)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_4C6E694DFB649B6F_OFFSET UNITYSDK_OFFSET(0x1508C980)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_59BDC73C87D34BE2_OFFSET UNITYSDK_OFFSET(0x1508D170)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x1508D4D0)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1508D610)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0x1508D3F0)
#define CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1508D6B0)
#define CLASS_2_9D3DA1BFF2F6EABD_SET_REPLACECOUNT_OFFSET UNITYSDK_OFFSET(0x1508D6E0)
#define CLASS_2_9D3DA1BFF2F6EABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1508C8A0)

inline static constexpr unsigned int Class_2_9D3DA1BFF2F6EABD_TypeDefinitionIndex = 65688;

class Class_2_9D3DA1BFF2F6EABD : public ::Class_1_2BF31F3092BDFD9E
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80
	::RPG::Client::WolfBroGunPlayRogue* Field_2_1; // 0x88
	::System::Int32 _ReplaceCount_k__BackingField; // 0x90

	::System::Void _ctor(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1, ::RPG::Client::WolfBroGunPlayRogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*, ::RPG::Client::WolfBroGunPlayRogue*))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1577395D9A9E4AFA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_1577395D9A9E4AFA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C6E694DFB649B6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_4C6E694DFB649B6F_OFFSET))(this);
	}

	::System::Void Method_2_59BDC73C87D34BE2(::RPG::Client::WolfBroGunPlayTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_59BDC73C87D34BE2_OFFSET))(this, a1);
	}

	::Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B* Method_2_3091BBD11FD1CB39()
	{
		return ((::Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_3091BBD11FD1CB39_OFFSET))(this);
	}

	::System::Void Method_2_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 get_ReplaceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_GET_REPLACECOUNT_OFFSET))(this);
	}

	::System::Void set_ReplaceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_SET_REPLACECOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D3DA1BFF2F6EABD_METHOD_2_038349821F206DD5_OFFSET))(this);
	}
};
